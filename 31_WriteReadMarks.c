/*
Author Aryan Sharma 133
Creation Date:30/3/2021
Last Modification:30/3/2021
Purpose: Program for reading and writing the student marks to files.
*/
#include <stdio.h>  	//stdio.h is the header file for standard input and output.
#include <stdlib.h>		//stdlib.h is the header of the general purpose standard library.
struct s {				//Creating a user defined data type using structures.
	char name[50];		//Variable declarartion of character data type.
	int RollNo;			//Variable declarartion of integer data type.
	int Marks;			//Variable declarartion of integer data type.
};
int main(){				//main function body.
	struct s a[10],b[10];		//variable initilisation of struct data type.
	FILE *fptr;
	int i;				//Variable declarartion of integer data type.
	fptr=fopen("C:\\Users\\HP\\Desktop\\C_Programs\\Aryan_133_C_Programs_Repository\\31_WRM.txt","wb"); //Opening the file from the location.
	for (i=0;i<1;++i) {
		fflush(stdin);
		printf("Enter Name: ");		//Printf function calling.
		gets(a[i].name);			//Scanning the entered text.
		printf("\nEnter Roll Number: ");	//Printf function calling.
		scanf("%d",&a[i].RollNo);	//scanf function calling.
		printf("\nEnter Marks: ");	//Printf function calling.
		scanf("%d",&a[i].Marks);	//scanf function calling.
	}
	fwrite(a,sizeof(a),1,fptr);
	fclose(fptr);		//It will close file
	fptr=fopen("C:\\Users\\HP\\Desktop\\C_Programs\\Aryan_133_C_Programs_Repository\\31_WRM.txt","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n\nEntered details are:\n");		//Printf function calling.
	for (i=0;i<1;++i) {
		printf("\nName: %s\nRoll Number: %d\nMarks: %d",b[i].name,b[i].RollNo,b[i].Marks);	//Printf function calling.
	}
	fclose(fptr);		//It will close file
}