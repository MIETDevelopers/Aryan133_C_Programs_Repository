/*
Author Aryan Sharma 133
Creation Date:18/3/2021
Last Modification:18/3/2021
Purpose: A C Program to check whether the entered number is Odd or Even.
*/
#include<stdio.h>  //stdio.h is the header file for standard input and output.
int main(){
    int num;  //Variable declarartion of integer data type .
    printf("Enter an integer:");  //Printsf function calling.
    scanf("%d", &num); //It will scan the numbers entered by user.
    if(num % 2 == 0)
        printf("%d is even.", num);  //It will print if num%2==0
    else
        printf("%d is odd.", num);  //It will print if num%2!=0
    return 0;
}