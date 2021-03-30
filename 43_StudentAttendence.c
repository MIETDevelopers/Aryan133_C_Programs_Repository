/*
Author Aryan Sharma 133
Creation Date:30/3/2021
Last Modification:30/3/2021
Purpose: Student's attendence detail
*/
#include <stdio.h> //Pre process directive to include standard input output functions header file
int main() { //main function body
    printf("The mimimum attendance for giving the examination is 75 percent. \n");  //Printf function calling.
    printf("enter details to check eligibility:\n");  //Printf function calling.
    float a, b;
    printf("enter the total no. of classes held.\n");  //Printf function calling.
    scanf("%f", &a);
    printf("enter the no. of classes attended.\n");  //Printf function calling.
    scanf("%f", &b);
    if((b/a) * 100 < 75) {
        printf("your attendance is less than 75%.\n");  //Printf function calling.
        char c;
        printf("Do you have a medical cause? 'Y' for yes and 'N' for no.\n");  //Printf function calling.
        scanf(" %ch", &c);
    switch(c) {
    case 'Y':
        printf("you are eligible for giving the examinations.");  //Printf function calling.
          break;
    case 'N': 
      printf("sorry, you are not eligible for giving the examinations.");  //Printf function calling.
          break;
    default:
      printf("Invalid input.");  //Printf function calling.
    }
    } else {
        printf("you are eligible for giving the examinations.");  //Printf function calling.
    }
    return 0;
}