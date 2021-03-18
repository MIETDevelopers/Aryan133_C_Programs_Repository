/*
Author Aryan Sharma 133
Creation Date:18/3/2021
Last Modification:18/3/2021
Purpose: Program to calculate Factorial of a number. 
*/
#include<stdio.h>  
int main(){    
	int i,fact=1,number;    
	printf("Enter a number: ");  //Printf function calling.   
	scanf("%d",&number);    //It will scan the number entered by user.
	for(i=1;i<=number;i++){    //For loop
		fact=fact*i;   //Formula to calculate Factorial.
		}    
	printf("Factorial of %d is: %d",number,fact);
	return 0;  
}