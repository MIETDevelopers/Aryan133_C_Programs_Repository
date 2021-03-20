/*
Author AryanSharma 133
Creation Date:18/3/2021
Last Modification:18/3/2021
A program to calculate Area/Perimeter of different shapes.
Formulas:
	Perimeter of Square: 4 * side
	Perimeter of Rectagnle: 2 * (Length + Breadth)
	Perimeter of Circle: 2*(22/7)*radius
	Area of Square: side*side
	Area of Rectangle: Length * Breadth
	Area of Circle: (22/7)*radius*radius 
*/ 
#include <stdio.h>  //stdio.h is the header file for standard input and output.
int main(){
	char operation;  //Variable declarartion of character data type
	float radius, sideOfSquare, sideOfRectangle1, sideOfRectangle2;  ////Variable declarartion of float data type
	printf("What do you want to calculate:\n 1.Perimeter of circle.\n 2.Area of circle.\n 3.Perimeter of square.\n 4.Area of square.\n 5.Perimeter of rectangle.\n 5.Area of rectangle.\n");
	scanf("%c",&operation);//It will scan the operation entered by user.
	switch(operation){ //Switch case function
		case'1':
			printf("Enter radius of circle\n");  //Printf function calling.
			scanf("%f",&radius);  //It will scan the values entered by user. //Taking user input in float data type
			printf("Perimeter of circle is %f ",((2*22*radius)/7));
			break;
		case'2':
			printf("Enter radius of circle\n");
			scanf("%f",&radius);	//It will scan the values entered by user.
			printf("Area of circle is %f", ((22*radius*radius)/7));
			break;
		case'3':
			printf("Enter size of side\n");
			scanf("%f",&sideOfSquare);	//It will scan the values entered by user.
			printf("Perimeter of square is %f ",4*sideOfSquare);
			break;
		case'4':
			printf("Enter size of side\n");
			scanf("%f",&sideOfSquare);	//It will scan the values entered by user.
			printf("Area of square is %f",sideOfSquare*sideOfSquare);
			break;
		case'5':
			printf("Enter size of sides\n");
			scanf("%f %f",&sideOfRectangle1, &sideOfRectangle2);  //It will scan the values entered by user.
			printf("Perimeter of rectangle = %f", 2*(sideOfRectangle1+sideOfRectangle2));
			break;
		case'6':
			printf("Enter size of sides\n");
			scanf("%f %f",&sideOfRectangle1, &sideOfRectangle2);  //It will scan the values entered by user.
			printf("Area of rectangle = %f", sideOfRectangle1*sideOfRectangle2);
			break;
		default: //code to be executed if operator doesn't match any cases.
			printf("Error occoured, input values are incorrect");
	}
	return 0;
}