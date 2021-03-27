/*
Author Aryan Sharma 133
Creation Date:27/3/2021
Last Modification:27/3/2021
Purpose: Program to print factorial using recursion.
*/
#include<stdio.h>	//Pre-process directive to include standard input and output functions header file.
int main(){		//Main function body start.
    int n;		//Variable declarartion of integer data type
    long int multiplyNumbers(int n);		//Variable declarartion of long integer data type
    printf("Enter a positive integer: ");		//printf function calling
    scanf("%d",&n);			//scanf function calling
    printf("\nFactorial of %d = %ld", n, multiplyNumbers(n));	//printf function calling
    return 0;
}
long int multiplyNumbers(int n){
	if (n>=1)		
		return n*multiplyNumbers(n-1);
	else
		return 1;
}