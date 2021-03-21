/*
Author Aryan Sharma 133
Creation Date:21/3/2021
Last Modification:21/3/2021
Purpose: A program to read and print two dimensional array.
*/
#include<stdio.h>	//Pre-process directive to include standard input and output functions header file.
int main(){
	int twoDArr[2][3] , x, y;  //varialble and array declaration of integer data type.
  	for(x=0; x<2; x++) {
		for(y=0;y<3;y++) {
        	printf("Enter value for disp[%d][%d]:", x, y);    //printf function calling.
        	scanf("%d", &twoDArr[x][y]);           //scanning element one by one 
		}
	}
    printf("Two Dimensional array elements:\n"); 
    for(x=0; x<2; x++) {
    	for(y=0; y<3; y++) {
        	printf("%d ", twoDArr[x][y]);         //printing 2D array elements one by one in rows and column.
        	if(y==2) {
            	printf("\n");                   //escape sequence (new line)
         	}
      	}
   	}
	return 0;
}