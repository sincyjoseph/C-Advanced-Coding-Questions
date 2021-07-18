Problem statement:- Program to Check whether a year is leap year or not.

Data requirement:-

   Input Data:-Year

  Output Data:-String Output

Program in C
Here is the source code of the C Program to Check whether a year is leap year or not.
    
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    
    if((year%100==0 && year%400==0) || (year%100!=0 && year%4==0))
        printf("It is a leap year");
    else 
        printf("It is not leap year");
}

