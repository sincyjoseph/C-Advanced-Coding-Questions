Problem statement:- Program to Find the area and perimeter of a circle.

Data requirement:-

   Input Data:-radius

  Output Data:-area, perimeter

Program in C
Here is the source code of the C Program to Program to Find the area and perimeter of a circle.
Code:

#include<stdio.h>
int main()
{
    double radius;
    double area, perimeter;
    
    printf("Enter the radius of the circle:");
    scanf("%lf",&radius);
    
    area=3.14*radius*radius;
    perimeter=2*3.14*radius;
    
    printf("Area of the Circle = %0.2lf", area);
    printf("\nPerimeter of the Circle = %0.2lf", perimeter);
    
    return 0;
}
