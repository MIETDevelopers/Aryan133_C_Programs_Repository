/*
Author AryanSharma 133
Creation Date:18/3/2021
Last Modification:18/3/2021
Purpose: Convertion of Decimal to binary
*/
#include<stdio.h> //Pre Process directive to include standard input output functions header file   
#include<stdlib.h>  
int main(){  
	int a[10],n,i;   //variable declaration of integer data type   
	printf("Enter the number to convert: ");   //printf function calling 
	scanf("%d",&n);    //scanf function calling
	for(i=0;n>0;i++) {    
		a[i]=n%2;    
		n=n/2;    
	}    
	printf("\nBinary of Given Number is=");   //printf function calling    
	for(i=i-1;i>=0;i--) {    
		printf("%d",a[i]);  //printf function calling     
	}    
return 0;  
}