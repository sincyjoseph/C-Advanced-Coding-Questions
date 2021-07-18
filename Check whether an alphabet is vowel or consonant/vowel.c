Problem statement:- Program to check whether an alphabet is vowel or consonant using switch case.

Data requirement:-

   Input Data:-alphabet

  Output Data:-String output

Program in C
Here is the source code of the C Program to check whether an alphabet is vowel or consonant using switch case.

Code:

#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter an alphabet:");
    scanf("%c",&alphabet);
    
    switch(alphabet)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("It is vowel");
            break;
        default:
            printf("It is consonant");
    }
}
