/**
* @author Amr Ramadan
* @date Aug, 6 2023 

* DISCLAIMER: this code is writen as an assigment for the ITI summer 
* training for 2023.

* this code prompts the user to enter ten numbers and then asks for 
* a number to search for within the previously entered ten numbers.

**/


/* HEDDER FILES AND DEPENDENCIES BEGIN */
#include<stdio.h>
#include<stdbool.h>
/* HEDDER FILES AND DEPENDENCIES END */


/* MACROS BEGIN */
#define DEBUG false
/* MACROS END */


/* MAIN FUNCTION BEGIN */
void main(void){
	/* PV BEGIN */
	int num_arr[10] = {0};
	int num = -1;
	/* PV END */
	
	/* USER INPUT BEGIN */
	for(int i=0; i<10; i++){
		printf("Please enter number %d: ", i+1);
		scanf("%d", &num_arr[i]);
		fflush(stdin);
	}
	
	printf("Enter a value to search: ");
	scanf("%d", &num);
	fflush(stdin);
	/* USER INPUT END */
	
	
	/* DEBUG BEGIN */
	if(DEBUG){
		printf("\n  - DEBUG BEGIN -\n");
		for(int i=0; i<10; i++){
			printf("num_arr[%d]= %d\n", i, num_arr[i]);
		}
		printf("num = %d\n", num);
		printf("  - DEBUG END -\n");
	}
	/* DEBUG END */	
	
	
	/* SEARCH OUTPUT BEGIN */
		for(int i=0; i<10; i++){
			/* DEBUG BEGIN */
			if(DEBUG) printf("\n num_arr[%d] = %d", i, num_arr[i]);
			/* DEBUG END */
			
			if(num_arr[i] == num){
				printf("\nvalue exists at element number: %d\n", i+1);
				break;	
			} 
			
			if((num_arr[i] != num) && (i == 9)) printf("\nvalue does not exist!\n");
		}
	/* SEARCH INPUT END */
	
	/* INFINITE LOOP BEGIN */
	while(1);
	/* INFINITE LOOP END */
}
/* MAIN FUNCTION END */