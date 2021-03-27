/*
Author Aryan Sharma 133
Creation Date:27/3/2021
Last Modification:27/3/2021
Purpose: Program to store Array of structures for student marks for each student and passing it to function for various operations.
*/
#include <stdio.h>
#include <string.h>
struct student{
    int id;		//Variable declarartion of integer data type
    char name[30];  //Variable declarartion of character data type
    float percentage;  //Variable declarartion of float data type
};
int main(){  //main function body 
    int i;   //Variable declarartion of integer data type
    struct student record[3];
    // 1st student's record
    record[0].id=1;
    strcpy(record[0].name, "Aryan");
    record[0].percentage = 99.0;
    // 2nd student's record         
    record[1].id=2;
    strcpy(record[1].name, "Bhanu");
    record[1].percentage = 99.1;
    // 3rd student's record
    record[2].id=3;
    strcpy(record[2].name, "Jayant");
    record[2].percentage = 99.2;
    for(i=0; i<3; i++){
        printf(" Records of STUDENT : %d \n", i+1);		//printf function calling
        printf(" Id is: %d \n", record[i].id);			//printf function calling
        printf(" Name is: %s \n", record[i].name);		//printf function calling
        printf(" Percentage is: %f\n",record[i].percentage); //printf function calling
    }
    return 0;
}