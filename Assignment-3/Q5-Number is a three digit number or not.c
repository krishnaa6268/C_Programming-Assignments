//5. Write a program to check whether a given number is a three digit number or not.

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a Number:\n");
    scanf("%d",&x);

    if(x>99 && x<1000)
        printf("%d is a three digit number.",x);
    else
        printf("%d is not a three digit number.",x);

    return 0;
}

