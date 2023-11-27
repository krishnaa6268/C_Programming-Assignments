//10. C program to find all roots of a quadratic equation using switch case

#include<stdio.h>
#include <math.h>

int main()
{
    double a,b,c,D, r1,r2, rl,img;
    printf("Enter coefficients a, b and c:\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    D=(b*b-4*a*c);

    switch(D>0)
    {
    case 1:
        printf("The roots are real and different.\n");

        r1 = (-b+sqrt(D)) / (2*a);
        r2 = (-b-sqrt(D)) / (2*a);
        printf("root1 = %0.2lf and root2 = %0.2lf", r1, r2);
        break;
    case 0:
        switch(D<0)
        {
        case 1:
            printf("The roots are imaginary roots.\n");

            rl = -b / (2 * a);
            img = sqrt(-D) / (2 * a);
            printf("root1 = %0.2lf+%0.2lfi and root2 = %0.2f-%0.2fi", rl, img, rl, img);
            break;
        case 0:
            printf("The roots are real and equal.\n");

            r1 = -b / (2 * a);
            r2 = -b / (2 * a);
            printf("root1 = root2 = %0.2lf:", r1);
            break;
        }

    }

    getch();
    return 0;
}




