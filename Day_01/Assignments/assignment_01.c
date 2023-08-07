/**
* @author Amr Ramadan
* @date Aug, 6 2023 

* DISCLAIMER: this code is writen as an assigment for the ITI summer 
* training for 2023.

* this code prints out the following sequence on the screen:

                    *
				   ***
				  *****
				 *******
				*********
			   ***********	

**/


/* HEDDER FILES AND DEPENDENCIES BEGIN */
#include<stdio.h>
/* HEDDER FILES AND DEPENDENCIES END */


/* MACROS BEGIN */
#define NUMBER_OF_ROWS 6 // change this value to alter the hight fo the pyramid
/* MACROS END */


/* MAIN FUNCTION BEGIN */
void main(void){
	/* PYRAMID CODE BEGIN */
	printf("\n");
	for(int row=1; row<NUMBER_OF_ROWS+1 ; row++){
		for(int i=0; i<NUMBER_OF_ROWS-row; i++) printf(" ");
		for(int j=0; j<2*row-1; j++) printf("*");
		for(int i=0; i<NUMBER_OF_ROWS-row; i++) printf(" ");
		printf("\n");
	}
	/* PYRAMID CODE END */
	
	/* INFINITE LOOP BEGIN */
	while(1);
	/* INFINITE LOOP END */
}
/* MAIN FUNCTION END */