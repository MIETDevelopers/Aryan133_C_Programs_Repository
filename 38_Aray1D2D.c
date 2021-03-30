/*
Author Aryan Sharma 133
Creation Date:30/3/2021
Last Modification:30/3/2021
Purpose: 1D and 2D arrays passed as arguments to a single function and the function implementation should simply print those arrays passed as arguments
*/
#include <stdio.h> //Pre Process directive to include standard input output function header file
void disp( char ch){
   printf("%c ", ch);  //printf function calling
}
int main(){ //main function body starting
   	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'}; 	// Array Declaration
   	for (int x=0; x<10; x++){ 		//Passing each element one by one using subscript
       disp (arr[x]);
   	}
   	return 0;
}