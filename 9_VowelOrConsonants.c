/*
Author Aryan Sharma 133
Creation Date:18/3/2021
Last Modification:18/3/2021
Purpose: A C Program to check whether the alphabet is Vowel or Consonant.
The letters a, e, i, o and u are called vowels & the remaining ones are called consonants.
*/
#include<stdio.h>
int main(){
    char c, alphabet;  //Declarartion of variable data type.
    printf("Enter an alphabet:\n");  //Printf function calling.
    scanf("%c", &c); //It will scan the alphabet entered by user.
    alphabet = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (alphabet)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}