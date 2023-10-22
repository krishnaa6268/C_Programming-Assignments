//7. Write a program to count digits in a given number

#include<stdio.h>

int main()
{
    int n,count=0;
    printf("Enter a number:\n");
    scanf("%d",&n);

    while(n)
    {
        n=n/10;
        count++;
    }

    printf("Number of digit: %d \n",count);

    return 0;
}
