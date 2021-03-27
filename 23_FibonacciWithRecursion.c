/*
Author Aryan Sharma 133
Creation Date:27/3/2021
Last Modification:27/3/2021
Purpose: Fibaonacci series using recursion.
*/
#include<stdio.h>	//Pre-process directive to include standard input and output functions header file.   
int main(){    //Main function body start.
	int n1=0,n2=1,n3,i,number;    //Variable declarartion of integer data type
	printf("Enter the number of elements: ");		//printf function calling    
	scanf("%d",&number);    //scanf function calling
	printf(" %d %d",n1,n2);		//Printing 0 and 1.   
	for(i=2;i<number;++i)		//Loop starts from 2.   
		{	
			n3=n1+n2;    
  			printf(" %d",n3);    
  			n1=n2;   //Putting value of n2 in n1
  			n2=n3;   //Putting value of n3 in n2   
 		}  
	return 0;  
}