//3. Write a function to check whether a given number is Prime or not. (TSRS)

#include<stdio.h>

int CheckPrime(int);

int main()
{
    int a;
    printf("Enter a number to check prime or not: ");
    scanf("%d", &a);

    if(CheckPrime(a) == 1)
        printf("%d is a prime number. ",a);
    else
        printf("%d is not a prime number. ",a);

    return 0;
}

int CheckPrime(int n)
{
    int p,s=0;

    p=(n/2);

    for(int i=2; i<=p; i++)
    {
        if(n%i==0)
        {
            return 0;   //for not a prime number.
            s=1;
            break;
        }
    }
    if(s==0)
       return 1; //for a prime number.
}
