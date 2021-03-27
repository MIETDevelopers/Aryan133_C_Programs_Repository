/*
Author Aryan Sharma 133
Creation Date:27/3/2021
Last Modification:27/3/2021
Purpose: Program to demonstrate the use of malloc() function.
*/
#include <stdio.h> 			//Pre-process directive to include standard input and output functions header file
#include <stdlib.h>         //Using standard library header file.
	int main(){
	int *ptr;
		ptr = malloc(15 * sizeof(*ptr)); //A block of 15 integers.
    	if (ptr != NULL) {
        *(ptr + 5) = 298; 		//Assign 298 to sixth integer.
    printf("Value of the 6th integer is %d",*(ptr + 5));	//printf function calling
    }
}