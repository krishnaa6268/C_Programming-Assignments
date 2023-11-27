//10. Write a function to print all prime factors of a given number (TSRN)
//    For example, if the number is 36 then your result should be 2, 2, 3, 3.
#include<stdio.h>

void AllFactors(int );

int main()
{
    int n;
    printf("Enter a number to find all the factors : ");
    scanf("%d", &n);

    AllFactors(n);

    return 0;
}

void AllFactors(int n)
{

    int i=2;
    while(n!=1)
    {
        if(n%i ==0)
        {
            n=n/i;
            printf("%d ",i);
        }
        else
            i++;

    }
}

