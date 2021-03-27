/*
Author Aryan Sharma 133
Creation Date:27/3/2021
Last Modification:27/3/2021
Purpose: Program to store information of a student using union. 
*/
#include <stdio.h>
#include <string.h>
 
union student{
    char name[20];
    char subject[20];
    float percentage;
};
int main() {		//main function body 
    union student record1;
    union student record2;
    // assigning values to record1 union variable
    strcpy(record1.name, "Raju");
    strcpy(record1.subject, "Maths");
    record1.percentage = 86.50;
    printf("Union record1 values example\n");			//printf function calling
    printf(" Name       : %s \n", record1.name);		//printf function calling
    printf(" Subject    : %s \n", record1.subject);		//printf function calling
    printf(" Percentage : %f \n\n", record1.percentage);//printf function calling
    printf("Union record2 values example\n");			//printf function calling
    strcpy(record2.name, "Mani");	
    printf(" Name       : %s \n", record2.name);		//printf function calling
    strcpy(record2.subject, "Physics");
    printf(" Subject    : %s \n", record2.subject);		//printf function calling
    record2.percentage = 99.50;
    printf(" Percentage : %f \n", record2.percentage);	//printf function calling
    return 0;
}