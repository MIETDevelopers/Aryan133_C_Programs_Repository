/*
Author Aryan Sharma 133
Creation Date:20/3/2021
Last Modification:20/3/2021
Purpose: To find maximum number in n number.
*/
#include <stdio.h>  //stdio.h is the header file for standard input and output.
int main(){
  	int i,n;  //Variable declarartion of integer data type.
  	float num; //Variable declarartion of float data type.
  	float max=0;  //Variable declarartion and initilisation of float data type.
  	printf("How many numbers: "); //printf function calling.
  	scanf("%d",&n); 
	for(i=0; i<n; i++){  
		printf("\nEnter number %d: ",i+1);
    	scanf("%f",&num);  //It will scan the numbers entered by user upto the limit setted by user because of for loop.
    	if(num>max)
    		max=num;  //Putting value of num in max.
 	}
	printf("\nThe Largest number is %f",max); //printf function calling  //It will print the largest number as the output.
 	return 0;
}