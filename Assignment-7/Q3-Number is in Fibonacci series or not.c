//Q3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>

int main()
{
     int n,a=0,b=1,s;
     printf("Enter a Number to check in Fibonacci Series: ");
     scanf("%d",&n);

    {
        for(int i=1; i<=n; i++)
        {
            s=a+b;
            a=b;
            b=s;
            if(s==n)
            {
                printf("%d is in Series.",n);
                break;
            }
        }
         if(s!=n)
            {
                printf("%d is not in Series.",n);
            }

    }

    return 0;
}
