//4. Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>

int NextPrime(int);

int main()
{
    int a;
    printf("Enter a number to print next prime: ");
    scanf("%d",&a);

    printf("Next Prime number: %d ",NextPrime(a));

    return 0;
}

int NextPrime(int a)
{
    int n,i,count;

	for(n=a+1; 1 ; n++)
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
            return n;
            break;
        }
	}
}
