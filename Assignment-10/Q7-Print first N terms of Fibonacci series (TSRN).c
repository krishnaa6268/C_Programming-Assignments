//7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>

void Fibo(int);

int main()
{
    int n;
     printf("Enter a Number to print N term of Fibonnaci: \n");
     scanf("%d",&n);

    Fibo(n);

    return 0;
}

void Fibo(int n)
{
     int a=0,b=1,s;

     printf("0 1 ");
     for(int i=1; i<=n; i++)
     {
        s=a+b;
        a=b;
        b=s;
        printf("%d ",s);
     }
}
