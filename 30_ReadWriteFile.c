/*
Author Aryan Sharma 133
Creation Date:30/3/2021
Last Modification:30/3/2021
Purpose: Program for reading and writing text files.
*/
#include <stdio.h>  		//stdio.h is the header file for standard input and output.
#include <stdlib.h>			//stdlib.h is the header of the general purpose standard library.
struct s {                 	//Creating a user defined data type using structures.
	char text[1000];		//Variable declarartion of character data type.
};
int main(){					//main function body.
	struct s a[1000],b[1000];		//variable initilisation of struct data type.
	FILE *fptr;
	int i;					//Variable declarartion of integer data type.
	fptr=fopen("C:\\Users\\HP\\Desktop\\C_Programs\\Aryan_133_C_Programs_Repository\\30_RWF.txt","wb"); //Opening the file from the location.
	for (i=0;i<1;++i) {		//for loop
		fflush(stdin);
		printf("Enter Text: "); 	//Printf function calling.
		gets(a[i].text); //Scanning the entered text.
	}
	fwrite(a,sizeof(a),1,fptr);		//fwrite function writes a block of data to the stream.
	fclose(fptr);		//It will close file
	fptr=fopen("C:\\Users\\HP\\Desktop\\C_Programs\\Aryan_133_C_Programs_Repository\\30_RWF.txt","rb");
	fread(b,sizeof(b),1,fptr);
	printf("\n\nEntered details are:\n");		//Printf function calling.
	for (i=0;i<1;++i) {
		printf("%s\n",b[i].text); 	//Printf function calling.
	}
	fclose(fptr);		//It will close file
}