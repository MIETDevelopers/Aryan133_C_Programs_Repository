/*
Author Aryan Sharma 133
Creation Date:18/3/2021
Last Modification:18/3/2021
Purpose: A C Program to check whether the entered number is Odd or Even.
*/
#include<stdio.h>
int main(){
    int num; //Declarartion of variable data type.
    printf("Enter an integer:");  //Printsf function calling.
    scanf("%d", &num); //It will scan the numbers entered by user.
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;
}