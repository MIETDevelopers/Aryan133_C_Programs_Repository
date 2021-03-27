/*
Author Aryan Sharma 133
Creation Date:27/3/2021
Last Modification:27/3/2021
Purpose: Program to demonstrate the use of calloc() function.
*/
#include <stdio.h>		//Pre-process directive to include standard input and output functions header file
#include <stdlib.h>		//Using standard library header file.
int main() {
    int i, * ptr, sum = 0;
    ptr = calloc(10, sizeof(int));    // Dynamically allocate memory using calloc() 
    if (ptr == NULL) {
        printf("Error! memory not allocated.");   //printf function calling
        exit(0);
    }
    printf("Building and calculating the sequence sum of the first 10 terms \n ");  //printf function calling
    for (i = 0; i < 10; ++i){ 
    	* (ptr + i) = i;
        sum += * (ptr + i);
    }
    printf("Sum = %d", sum);  //printf function calling
    free(ptr);   // Free the memory 
    return 0;
}