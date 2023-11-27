//3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>

int CheckEvenOdd(int);

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if(CheckEvenOdd(a)==1)
    printf("%d is Even",a);

    if(CheckEvenOdd(a)==0)
    printf("%d is Odd",a);

    return 0;
}

int CheckEvenOdd(int a)
{
    if(a%2==0)
        return 1;
    else
        return 0;
}
