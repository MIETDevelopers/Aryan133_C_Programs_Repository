/*
Author Aryan Sharma 133
Creation Date:30/3/2021
Last Modification:30/3/2021
Purpose: Program to read .csv files.
*/
#include <stdio.h>     	//stdio.h is the header file for standard input and output.
#include <stdlib.h>		//Including standard library header files.
#include <string.h>		//Including string header files. 

const char* getfield(char* line, int num){
    const char* tok;
    for (tok = strtok(line, ";");
            tok && *tok;
            tok = strtok(NULL, ";\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}
int main(){			//main function body.
    FILE* stream = fopen("C:\\Users\\HP\\Desktop\\C_Programs\\Aryan_133_C_Programs_Repository\\034_ReadCSV.csv", "r"); //Path of the .csv file.
    char line[1024];        //Variable declarartion of character data type.
    while (fgets(line, 1024, stream)){		//while loop
        char* tmp = strdup(line);
        printf("Field 3 would be %s\n", getfield(tmp, 3));    //Printf function calling.
        free(tmp);
    }
}