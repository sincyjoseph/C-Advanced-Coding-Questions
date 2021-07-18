Problem statement:- Program to print the ascii value of a character.

Data requirement:-

   Input Data:- ch

  Output Data:-ch, ascii

Program in C
Here is the source code of the C Program to print the ascii value of a character.
Code:

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    int ascii=ch;
    printf("The ASCII value of %c is %d.",ch,ascii);
}
