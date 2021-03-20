/*
Author: AryanSharma 133
Creation Date:19/3/2021
Last Modification:20/3/2021
A program to print Fibonacci series.
*/
#include<stdio.h>  //Pre-process directive to include standard input and output functions header file  
int main(){
	int n, first = 0, second = 1, next, c;  //Variable declarartion of integer data type
	printf("Enter the number of terms :");  // printf function calling.
	scanf("%d",&n);  //This will read the number entered by user.
	printf("\nFirst %d terms of Fibonacci series are :-\n",n); // printf function calling.
	for ( c = 0 ; c < n ; c++ ){  //ForLoop function for the reference to the formuls of the series.
			if ( c <= 1 )
			next = c;  //Putting value of c in next.
		else
		{
			next = first + second;  
			first = second;  //Putting value of second in first.
			second = next;   //Putting value of next in second.
		}
			printf("%d  ",next); //This will give the output.
 		}
	return 0;
}