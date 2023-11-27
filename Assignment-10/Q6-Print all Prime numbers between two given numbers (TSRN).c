//6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>

void PrimeRange(int, int);

int main()
{
    int a,b;
    printf("Enter two number to print all Prime numbers between the numbers. : ");
    scanf("%d %d", &a, &b);

    PrimeRange(a, b);
    return 0;
}

void PrimeRange(int a, int b)
{
    int n,i,count;
	for(n=a; n<=b; n++)
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
