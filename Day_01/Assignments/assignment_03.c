/**
* @author Amr Ramadan
* @date Aug, 6 2023 

* DISCLAIMER: this code is writen as an assigment for the ITI summer 
* training for 2023.

* this code prompts the user to enter two numbers and prints the result  
* of addition, subtraction, ANDding, ORring, and XORing on the two nummbers. 

**/


/* HEDDER FILES AND DEPENDENCIES BEGIN */
#include<stdio.h>
/* HEDDER FILES AND DEPENDENCIES END */


/* MACROS BEGIN */

/* MACROS END */


/* MAIN FUNCTION BEGIN */
void main(void){
	/* PV BEGIN */
	int num_a = -1;
	int num_b = -1;
	/* PV END */
	
	/* USER INPUT BEGIN */
	printf("Please enter number a: ");
	scanf("%d", &num_a);
	fflush(stdin);
	printf("Please enter number b: ");
	fflush(stdin);
	scanf("%d", &num_b);
	/* USER INPUT END */
	
	/* OPERATIONS OUTPUT BEGIN */
	printf("a + b = %d\n", num_a + num_b);
	printf("a - b = %d\n", num_a - num_b);
	printf("a & b = %d\n", num_a & num_b);
	printf("a | b = %d\n", num_a | num_b);
	printf("a ^ b = %d\n", num_a ^ num_b);
	/* OPERATIONS INPUT END */
	
	/* INFINITE LOOP BEGIN */
	while(1);
	/* INFINITE LOOP END */
}
/* MAIN FUNCTION END */