// 1. Write a program to print the unit digit of a given number.

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);

    printf("Unit Digit: %d",(x%10));

    return 0;
}
