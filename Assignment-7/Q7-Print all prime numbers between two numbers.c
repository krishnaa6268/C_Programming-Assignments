//7. Write a program to print all Prime numbers between two given numbers
//6. Write a program to print all Prime numbers under 100

#include <stdio.h>

int main()
{
    int n,i,count,a,b;
    printf("Enter Range( a to b ) to print Primes: ");
    scanf("%d %d", &a,&b);

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

    getch();
	return 0;
}
