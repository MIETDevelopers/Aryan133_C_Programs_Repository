//Author AryanSharma 133
//Creation Date:18/3/2021
//Last Modification:21/3/2021
//Program of simple calculator.
#include<stdio.h> //stdio.h is the header file for standard input and output.
int main(){       
    char operator; //Variable declarartion of character data type 
    double n1, n2; //Variable declarartion of double data type 
    printf("Enter an operator (+, -, *, /): ");	 //printf function calling
    scanf("%c", &operator);	 //scanf function calling
    printf("Enter two operands: ");	//printf function calling
    scanf("%lf %lf",&n1, &n2);	//scanf function calling
    switch(operator){
        case '+':
            printf("%.1lf + %.1lf = %.2lf",n1, n2, n1+n2);//to be executed if operator = +;
            break; 
        case '-':
            printf("%.1lf - %.1lf = %.2lf",n1, n2, n1-n2);//to be executed if operator = -;
            break; 
        case '*':
            printf("%.1lf * %.3lf = %.2lf",n1, n2, n1*n2);//to be executed if operator = *;
            break;
        case '/':
            printf("%.1lf / %.1lf = %.2lf",n1, n2, n1/n2);//to be executed if operator = /;
            break;
        default:  //code to be executed if operator doesn't match any cases
            printf("Error! operator is not correct");
    }
    return 0;
}