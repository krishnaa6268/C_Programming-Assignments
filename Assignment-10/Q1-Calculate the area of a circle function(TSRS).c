//1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>

float Area(float);

int main()
{
    float r;
    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Area of Circle: %0.2f ",Area(r));

    return 0;
}

float Area(float a)
{
    return(3.14*a*a);
}
