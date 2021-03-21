/*
Author Aryan Sharma 133
Creation Date:20/3/2021
Last Modification:21/3/2021
Purpose: C program to sort an array in ascending order using Insertion Sort. 
*/
#include <stdio.h>
int main(){
    int noe, i, j, temp, arr[99];		//varialble declaration of integer data type.
    printf("Enter number of elements you want to evaluate:");		//printf function calling
    scanf("%d", &noe);
    printf("\nEnter %d elements of array:\n", noe);
    for (i = 0; i < noe; i++)
    {
        scanf("%d", &arr[i]);   //scanf function calling.
    }
    for (i = 1 ; i <= noe - 1; i++)   //Using for loop.
    {
	    j = i;
            while ( j > 0 && arr[j-1] > arr[j])		//using while loop
            {      
                temp     = arr[j];					//This loop will put the array in ascending order.
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
                j--;
            }
    }
    printf("\nSorted list in ascending order: ");
    for (i = 0; i <= noe - 1; i++)
    {
        printf("%d", arr[i]);  //This will print the array in ascending order.   //printf function calling.
    }
    return 0;
}