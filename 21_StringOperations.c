/*
Author Aryan Sharma 133
Creation Date:21/3/2021
Last Modification:21/3/2021
Purpose: A program to demonstrate the use of various string operations.
*/
#include <stdio.h>	//stdio.h is the header file for standard input and output.
int main()		//start of main body
{
    char name[30];
    printf("Enter name: \n");		//printf function calling 
    fgets(name, sizeof(name), stdin);  // scan string
    printf("Name: ");			//printf function calling
    puts(name);    		// print string
    return 0;
}