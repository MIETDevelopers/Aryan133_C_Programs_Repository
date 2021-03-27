/*
Author Aryan Sharma 133
Creation Date:27/3/2021
Last Modification:27/3/2021
Purpose: Program to swap numbers using call by reference.
*/
#include <stdio.h>      //Pre-process directive to include standard input and output functions header file
 void swap(int*, int*);
 int main(){            //Main function body start.
	int x, y;		    //Variable declarartion of integer data type
	printf("Enter the value of x and y\n");		//printf function calling  
	scanf("%d%d",&x,&y);			//scanf function calling
	printf("Before Swapping\nx = %d\ny = %d\n", x, y);		//printf function calling  
	swap(&x, &y); 			        //scanf function calling
	printf("After Swapping\nx = %d\ny = %d\n", x, y);		//printf function calling  
	return 0;
}
void swap(int *a, int *b){
   int temp;	//Variable declarartion of integer data type
   temp = *b;   //Putting value of b in temp
   *b = *a;     //Putting value of a in b
   *a = temp;   //Putting value of temp in a 
}