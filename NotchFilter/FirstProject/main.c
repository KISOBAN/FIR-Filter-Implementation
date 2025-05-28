//fir2ways.c FIR with alternative ways of storing/updating samples

#include "DSK6713_AIC23.h"		  //codec support
#include <math.h>
Uint32 fs=DSK6713_AIC23_FREQ_48KHZ; //set sampling rate

#define DSK6713_AIC23_INPUT_MIC 0x0015
#define DSK6713_AIC23_INPUT_LINE 0x0011
Uint16 inputsource=DSK6713_AIC23_INPUT_LINE; // select input

#define METHOD 'B'    		    //change to B or C or D 
#define N 3
#define PI 3.14

int fo = 0;						// NOTCH FREQUENCY
float yn = 0;				    //initialize filter's output
float dly[N];                   //delay samples array(one extra)
float h[N] = {1,1,1};			// COEFFICIENTS
#if METHOD == 'B' 	          

float *start_ptr;
float *end_ptr;
float *h_ptr;
float *dly_ptr;


#endif

interrupt void c_int11()	    //ISR
{
	float coef1 = -2*cosf(fo*(2*PI)/48000);
	h[1] = coef1;

	short i;
 
  yn = 0.0;                     //initialize filter's output

#if METHOD == 'A' 	          

  dly[0] = (float) input_left_sample();    
  for (i = 0; i< N; i++) 
  	yn += (h[i] * dly[i]);
  for (i = N-1; i > 0; i--) 
  	dly[i] = dly[i-1];

#elif METHOD == 'B'               

  *dly_ptr = (float) input_left_sample(); 

  for (i = 0; i < N ; i++)  
  {
    yn += *(h_ptr + i)* *dly_ptr;
    if (++dly_ptr > end_ptr) dly_ptr = start_ptr;
  }
  if (--dly_ptr < start_ptr) dly_ptr = end_ptr; 

#endif

  output_left_sample((short)((0.1)*yn));      //output filter
  return;				   				 //return from ISR
}

void main()
{
#if METHOD == 'B' 	 
         
  dly_ptr = dly;
  start_ptr = dly;
  end_ptr = dly + N - 1;
  h_ptr = h;

#endif

  comm_intr();
  while(1);

}

