//2. Write a program to print first N terms of Fibonacci series
#include<stdio.h>

int main()
{
     int n,a=0,b=1,s;
     printf("Enter a Number to print N term of Fibonnaci: \n");
     scanf("%d",&n);

     printf("0 1 ");
     for(int i=1; i<=n; i++)
     {
        s=a+b;
        a=b;
        b=s;
        printf("%d ",s);
     }
    return 0;
}
