//4. Write a program to check whether a given number is an even number or an odd number without using % operator.

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a Number:\n");
    scanf("%d",&x);

    if(x&1)
        printf("Odd Number.");
    else
        printf("Even Number.");

    return 0;
}
