/*
Author Aryan Sharma 133
Creation Date:30/3/2021
Last Modification:30/3/2021
Purpose: Pointer variable initialization with the address of another variable and then prints normal variable value and its address using pointer variable. 
*/
#include <stdio.h> //Pre process directive to include standard input output functions header file

int main(){ //main function body starting
    int a; 			// Declaring variable of integer data type 
    a = 10;			// Initializing variable
    int *p = &a; 	// Declaring and initializing the pointer
    printf("%d\n", *p);    //Printf function calling. 
    printf("%d\n", *&a);   //Printf function calling.  
    printf("%u\n", &a);    //Printf function calling.    
    printf("%u\n", p);     //Printf function calling.    
    printf("%u\n", &p);    //Printf function calling.   
    return 0;
}