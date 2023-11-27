//5. Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>

void OddNaturalNum(int);

int main()
{
    int a;
    printf("Enter a number to print first N odd natural numbers : ");
    scanf("%d", &a);

    OddNaturalNum(a);

    return 0;
}

void OddNaturalNum(int a)
{
    for(int i=1; i<=a*2; i+=2)
    {
        printf("%d \n",i);
    }
}
