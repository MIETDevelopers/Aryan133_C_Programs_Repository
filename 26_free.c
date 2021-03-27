/*
Author Aryan Sharma 133
Creation Date:27/3/2021
Last Modification:27/3/2021
Purpose:  Program to demonstrate the use of free() function.
*/
#include <stdio.h> 			//Pre-process directive to include standard input and output functions header file
#include <stdlib.h> //Using standard library header file.
int main() {
	int* ptr = malloc(10 * sizeof(*ptr));
	if (ptr != NULL){
  		*(ptr + 2) = 50;
  		printf("Value of the 2nd integer is %d",*(ptr + 2));		//printf function calling
	}
	free(ptr);
}