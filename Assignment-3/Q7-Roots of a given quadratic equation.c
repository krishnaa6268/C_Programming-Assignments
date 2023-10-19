//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots.

#include<stdio.h>

int main()
{
    float a,b,c,D;
    printf("Enter coefficients a, b and c:\n");
    scanf("%f %f %f",&a,&b,&c);

    D=(b*b-4*a*c);


    if(D==0)
        printf("The roots are real and equal.");

    else if(D>0)
            printf("The roots are real and different");

        else if(D<0)
            printf("The roots are imaginary roots.");

            getch();

    return 0;

}

