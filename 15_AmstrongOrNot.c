/*
Purpose: To find entered number is Armstrong number or not.
Author: Aryan Sharma
Creation date: 17 feb 2021
Updated date: 20 mar 2021
What is Armstrong number? 
An Armstrong number is a n -digit number that is equal to the sum of each 
of its digits taken to the nth power.
For example, 153 is an armstrong number because 153 = 1³ + 5³ + 3³.
*/
#include <stdio.h>      //Pre-process directive to include standard input and output functions header file.
int main(){
	int num, r, temp;   //Variable declarartion of integer data type.
	printf("Enter a three digit  number:",&num);   //printf function calling.
	scanf("%d",&num);  
	temp=num;        //Putting value of 'num' in 'temp'.
	int sum=0;       //Variable declarartion and initilisation of integer data type.	
	while (num>0){
		r= num %10;          //Finding and storing remainder of "num" in "r"
		sum += r * r * r ;   //Cubing and adding the value of "r" in "sum"
		num = num/10;        //Dividing 'num' by 10.
	}
	if (temp == sum){
		printf("\n%d is an Amstrong number.",temp);
	}else{
		printf("\n%d is not an Amstrong number.",temp);
	}
	return 0;
}