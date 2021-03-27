/*
Author Aryan Sharma 133
Creation Date:27/3/2021
Last Modification:27/3/2021
Purpose: Program to swap numbers using call by value.
*/
#include <stdio.h>       //Pre-process directive to include standard input and output functions header file
int main(){ 
    int x, y, temp;		    //Variable declarartion of integer data type
    printf("Enter Value of x "); 		//printf function calling  
    scanf("%d", &x); 			//scanf function calling
    printf("\nEnter Value of y ");		//printf function calling  
    scanf("%d", &y); 			//scanf function calling
    temp = x; 
    x = y; 
    y = temp; 
    printf("\nAfter Swapping: x = %d, y = %d", x, y);		//printf function calling 
    return 0; 
}