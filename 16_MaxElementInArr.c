/*
Author Aryan Sharma 133
Creation Date:21/3/2021
Last Modification:21/3/2021
Purpose: A program to find the largest number in a user defined array.
*/
#include<stdio.h>   //Pre-process directive to include standard input and output functions header file
int main(){ 	    //Main function body start.
	int i, noe;			//varialble declaration of integer data type.
	float arr[99];      //array declaration of float data type.
	printf("Enter number of elements you want to evaluate:",&noe);   //Printf function calling
	scanf("%d",&noe);
	printf("\nPlease enter %d numbers:\n",noe); 
	for (i = 0; i < noe; ++i){   //declaration of a for loop to find the max element and index
    	scanf("%f", &arr[i]);
	}
		for (i = 1; i < noe; ++i){
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
	printf("Largest element = %.2f", arr[0]); 	//Printf function calling
	return 0; 	//return function
	}