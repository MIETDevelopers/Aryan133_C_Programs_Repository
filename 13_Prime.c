/*
Author Aryan Sharma 133
Creation Date:30/3/2021
Last Modification:30/3/2021
Purpose: Program to check whether the number is Prime Number or not.
*/
#include <stdio.h>      //stdio.h is the header file for standard input and output.
int main(){             //main function body.
    int n, i, count = 0;    //Variable declarartion of integer data type.
    printf("Enter the Number.\n");  //Printf function calling.
    scanf("%d",&n);         //scanf function calling.
    for(i=2; i<=n/2; ++i){
        if(n%i==0){
            count=1;
            break;
        }
    }
    if (count==0)
        printf("%d is a Prime number.",n);  //Printf function calling.
    else
        printf("%d is not a Prime number.",n);  //Printf function calling.
    getchar();    
}