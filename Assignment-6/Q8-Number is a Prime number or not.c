//8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>

int main()
{
    int n,p,s=0;
    printf("Enter a number:\n");
    scanf("%d",&n);

    p=(n/2);

    for(int i=2; i<=p; i++)
    {
        if(n%i==0)
        {
            printf("Number is not prime");
            s=1;
            break;
        }

    }
    if(s==0)
       printf("Number is prime");

    return 0;
}
