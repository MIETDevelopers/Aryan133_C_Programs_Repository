/*
Author AryanSharma 133
Creation Date:18/3/2021
Last Modification:18/3/2021
To Demonstrate do while loop
*/
#include <stdio.h> //Pre-Process directive to include standard input output header file
int main () { //Main function body starting
   int a = 10;
   /* do loop execution */
   do {
      printf("value of a: %d\n", a);
      a = a + 1;
   }while( a < 15 );
 
   return 0;    //return statement 
}