// 8. Write a program to find next Prime number of a given number
#include <stdio.h>

int main()
{
    int a,n,i,count;
    printf("Enter a number to print next Prime: ");
    scanf("%d", &a);

	for(n=a+1; ; n++)
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
            break;
        }

	}

    getch();
	return 0;
}
