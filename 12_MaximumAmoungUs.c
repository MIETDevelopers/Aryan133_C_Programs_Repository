/*
Author Aryan Sharma 133
Creation Date:20/3/2021
Last Modification:20/3/2021
Purpose: To find maximum number in n number.
*/
#include <stdio.h>
int main(){
  int i,n;
  float num,max=0;
  //It will set the maximum number (Limit) of values to be entered by user based on their choice.
  printf("How many numbers: ");
  scanf("%d",&n); 
  
  for(i=0; i<n; i++)
  {
    //It will scan the numbers entered by user upto the limit setted by user.
    printf("\nEnter number %d: ",i+1);
    scanf("%f",&num);
    if(num>max)
    max=num;
  }
  printf("\nThe Largest number is %f",max); //It will give the largest number as the output.
  return 0;
}