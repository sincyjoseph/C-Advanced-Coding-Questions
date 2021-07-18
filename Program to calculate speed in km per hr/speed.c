Problem statement:-  Program to calculate speed in km/hr.

Formula:-

speed=d/t

where      d= distance 
           t=time

Data requirement:-
  Input Data:- d,t
  Output Data:- speed
Program in C
Here is the source code of the C Program to calculate speed in km/hr.

Code:

#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter the Distance in Kms:");
    double d;
    scanf("%lf",&d);
    printf("Enter the Time in Hrs:");
    double t;
    scanf("%lf",&t);
    double speed=d/t;
    printf("Speed is %0.2lf(Km/Hr)\n",speed);
}
