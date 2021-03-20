/*
Author Aryan Sharma 133
Creation Date:20/3/2021
Last Modification:20/3/2021
Purpose: A program to find sum of digits of a number using While Loop.
*/
#include <stdio.h>  //Pre-process directive to include standard input and output functions header file.
int main(){
	int num,reminder,sum=0; //Variable declarartion and initilisation of integer data type.
	printf("Please enter number:");
	scanf("%d", &num);    //This will scan (read) the number entered by user.
	while(num != 0){      //Using while loop.
		reminder = num % 10;
		sum = sum + reminder;
		num = num / 10;
	}
	printf("\nSum of the digits of given number = %d", sum);
	return 0;
}