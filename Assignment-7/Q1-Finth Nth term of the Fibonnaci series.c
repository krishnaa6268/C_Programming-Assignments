//1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>

int main()
{
     int n,a=0,b=1,s;
     printf("Enter a Number to print Nth term of Fibonnaci: \n");
     scanf("%d",&n);

    if (n==1)
         printf("0 ");
    else if(n==2)
        printf("1 ");
    else
    {
        n=n-2;
        for(int i=1; i<=n; i++)
        {
            s=a+b;
            a=b;
            b=s;
        }
            printf("%d ",s);
    }

    return 0;
}
