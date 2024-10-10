//5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>

void PrimeRange(int);

int main()
{
    int n;
    printf("Enter a number to print N Prime numbers : ");
    scanf("%d", &n);

    PrimeRange(n);

    return 0;
}

void PrimeRange(int b)
{
    int n,i,count;
	for(n=2; n<=b; n++)
	{
	    count=0;
	    for ( i = 2; i <= n / 2; i++)
	    {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && n!=1 ) {
            printf("%d ", n);
        }
	}
}
