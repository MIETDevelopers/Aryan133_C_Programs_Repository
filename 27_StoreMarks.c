/*
Author Aryan Sharma 133
Creation Date:27/3/2021
Last Modification:27/3/2021
Purpose: Program to store the student marks using structures and find total marks of individual student.
*/
#include <stdio.h>
struct student{			//structure datatype 
    char name[50];		//Variable declarartion of icharacter data type
    int roll;			//Variable declarartion of integer data type
    float attendance;	//Variable declarartion of float data type
    float marks;		//Variable declarartion of float data type
} s;
int main() {		//main function body 
    printf("Enter information:\n");	//printf function calling
    printf("Enter name: ");			//printf function calling
    fgets(s.name, sizeof(s.name), stdin);	
    printf("Enter roll number: ");	 //printf function calling
    scanf("%d", &s.roll);	//scanf function calling
    printf("Enter marks: ");	//printf function calling
    scanf("%f", &s.marks);//scanf function calling
    printf("Attendance: ");		//printf function calling
    scanf("%f", &s.attendance);//scanf function calling
    	//This will print the user input.
    printf("Displaying Information:\n");	//printf function calling
    printf("Name: ");				//printf function calling
    printf("%s", s.name);			//printf function calling
    printf("Roll number: %d\n", s.roll);	//printf function calling
    printf("Marks: %.1f\n", s.marks);		//printf function calling
    printf("Attendance: %.1f\n;",s.attendance);	  //printf function calling
    return 0;	
}