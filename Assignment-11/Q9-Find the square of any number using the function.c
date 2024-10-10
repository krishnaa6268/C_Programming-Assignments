//9. Write a program in C to find the square of any number using the function.
#include<stdio.h>

int Square(int);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    printf("Square of %d is %d. ",a,Square(a));

    return 0;
}

int Square(int a)
{
    return(a*a);
}
