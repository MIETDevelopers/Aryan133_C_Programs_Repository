/*
Author Aryan Sharma 133
Creation Date:27/3/2021
Last Modification:27/3/2021
Purpose: Program to perform  matrix multiplication.
*/
#include <stdio.h>	//Pre-process directive to include standard input and output functions header file.
void getMatrixElements(int matrix[][10], int row, int column){
	printf("\nEnter elements: \n");		//printf function calling
	for (int i = 0; i < row; ++i){		//for loop
		for (int j = 0; j < column; ++j){		//for loop
			printf("Enter a %d%d: ", i + 1, j + 1);
			scanf("%d", &matrix[i][j]);
		}
	}
}
void multiplyMatrices(int first[][10],int second[][10], int result[][10],int r1, int c1, int r2, int c2){
   //Multiplying matrices (Processing).
	for (int i = 0; i < r1; ++i){		//for loop
		for (int j = 0; j < c2; ++j){		//for loop
			result[i][j] = 0;
		}
	}
	for (int i = 0; i < r1; ++i) {		//for loop
		for (int j = 0; j < c2; ++j) {		//for loop
			for (int k = 0; k < c1; ++k) {		//for loop
				result[i][j] += first[i][k] * second[k][j];
			}
		}
	}
}
void display(int result[][10], int row, int column){
	printf("\nOutput Matrix:\n");		//printf function calling
	for (int i = 0; i < row; ++i) {		//for loop
		for (int j = 0; j < column; ++j) {		//for loop
			printf("%d  ", result[i][j]);		//Printing multiplied matrix.
			if (j == column - 1)
			printf("\n");		//By this we move to next line
		}
	}
}	
int main(){			//Main function body start.
	int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;	//varialble declaration of integer data type.
	printf("Enter rows and column for the first matrix: ");		//printf function calling
	scanf("%d %d", &r1, &c1);
	printf("Enter rows and column for the second matrix: ");		//printf function calling
	scanf("%d %d", &r2, &c2);
	while (c1 != r2){			//while loop
		printf("Error! Enter rows and columns again.\n");		//printf function calling
		printf("Enter rows and columns for the first matrix: ");		//printf function calling
		scanf("%d%d", &r1, &c1);
		printf("Enter rows and columns for the second matrix: ");		//printf function calling
		scanf("%d%d", &r2, &c2);
	}
	getMatrixElements(first, r1, c1);
	getMatrixElements(second, r2, c2);(second, result, r1, c1, r2, c2);
	display(result, r1, c2);
	return 0;	//return fumction
}