/*
Author Aryan Sharma 133
Creation Date:30/3/2021
Last Modification:30/3/2021
Purpose: Maximum of three input Numbers
*/
#include <stdio.h> //Pre process directive to include standard input output functions header file
int main() { //main function body
    double n1, n2, n3;
    printf("Enter three different numbers: ");    //Printf function calling.
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if (n1 >= n2 && n1 >= n3)    				// if n1 is greater than both n2 and n3, n1 is the largest
        printf("%.2f is the largest number.", n1);    //Printf function calling.
    if (n2 >= n1 && n2 >= n3)    				// if n2 is greater than both n1 and n3, n2 is the largest
        printf("%.2f is the largest number.", n2);    //Printf function calling.
    if (n3 >= n1 && n3 >= n2)					// if n3 is greater than both n1 and n2, n3 is the largest
        printf("%.2f is the largest number.", n3);    //Printf function calling.
    return 0;
}