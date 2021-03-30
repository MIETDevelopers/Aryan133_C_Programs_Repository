/*
Author Aryan Sharma 133
Creation Date:30/3/2021
Last Modification:30/3/2021
Purpose: pointer representation and print its elements values 
*/
#include <stdio.h> //Pre process directive to include standard input output functions header file
int main () { //main function body starting
   /* an array with 5 elements */
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};		//an array with 5 elements
   double *p;
   int i; 			// Declaring variable of integer data type
   p = balance;
   printf( "Array values using pointer\n");    //Printf function calling.	
   for ( i = 0; i < 5; i++ ) {
      printf("*(p + %d) : %f\n",  i, *(p + i) );    //Printf function calling.
   }
   printf( "Array values using balance as address\n");    //Printf function calling.	
   for ( i = 0; i < 5; i++ ) {
      printf("*(balance + %d) : %f\n",  i, *(balance + i) );    //Printf function calling.
   }
   return 0;
}