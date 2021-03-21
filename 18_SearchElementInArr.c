/*
Author Aryan Sharma 133
Creation Date:20/3/2021
Last Modification:21/3/2021
Purpose: A program to search an element in the array. 
*/
#include <stdio.h>	 //Pre-process directive to include standard input and output functions header file.
int main(){  
    int i,  searchNum, noe, array[noe], found;	//varialble declaration of integer data type.
    printf("Enter the number of elements:");	//printf function calling
    scanf("%d", &noe);//This will set the maximum number (Limit) of values to be entered by user based on their choice.
    printf("\nEnter %d elements of array:\n",noe);
    for (i = 0; i < noe; i++)      //"noe" will declare how many elements user can put in array.
    {
        scanf("%d", &array[i]); //This will scan the user input.
    }
    printf("\nEnter the element to be searched: ");
    scanf("%d", &searchNum);
    // This step will determine Linear search.
    for (i = 0; i < noe ; i++)
    {
        if (searchNum == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1) 
        printf("\nElement is present in the array at position %d.",i+1);	//It will print if element is present in the array.
    else
        printf("\nElement is not present in the array.");	//It will print if element is not present in the array.
    return 0;
}