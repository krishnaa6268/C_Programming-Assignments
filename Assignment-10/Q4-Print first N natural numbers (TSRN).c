//4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>

void NaturalNum(int);

int main()
{
    int a;
    printf("Enter a number to print first N natural numbers : ");
    scanf("%d", &a);

    NaturalNum(a);

    return 0;
}

void NaturalNum(int a)
{
    for(int i=1; i<=a; i++)
    {
        printf("%d \n",i);
    }
}
