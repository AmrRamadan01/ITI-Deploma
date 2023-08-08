/**
* @author Amr Ramadan
* @date Aug, 6 2023 

* DISCLAIMER: this code is writen as an assigment for the ITI summer 
* training for 2023.

* this code prompts the user to enter three numbers and prints them 
* back out in reverse order

**/


/* HEDDER FILES AND DEPENDENCIES BEGIN */
#include<stdio.h>
/* HEDDER FILES AND DEPENDENCIES END */


/* MACROS BEGIN */

/* MACROS END */


/* MAIN FUNCTION BEGIN */
void main(void){
	/* PV BEGIN */
	int num1 = -1;
	int num2 = -1;
	int num3 = -1;
	/* PV END */
	
	/* USER INPUT BEGIN */
	printf("Please enter number 1: ");
	scanf("%d", &num1);
	fflush(stdin);
	printf("Please enter number 2: ");
	fflush(stdin);
	scanf("%d", &num2);
	printf("Please enter number 3: ");
	fflush(stdin);
	scanf("%d", &num3);
	/* USER INPUT END */
	
	/* USER INPUT BEGIN */
	printf("number 3: %d\n", num3);
	printf("number 2: %d\n", num2);
	printf("number 1: %d\n", num1);
	/* USER INPUT END */
	
	/* INFINITE LOOP BEGIN */
	while(1);
	/* INFINITE LOOP END */
}
/* MAIN FUNCTION END */