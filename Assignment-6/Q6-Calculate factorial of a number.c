//6. Write a program to calculate factorial of a number

#include<stdio.h>

int main()
{
    int n,fact=1;
    printf("Calculate factorial of a number:\n");
    scanf("%d",&n);

   for(int i=n; i>=1; i--)
   {
     fact=fact*i;
   }

    printf("Factorial: %d \n",fact);

    return 0;
}
