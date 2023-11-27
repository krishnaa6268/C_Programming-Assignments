//6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>

int Fact(int );

int main()
{
    int n;
    printf("Enter a number to find Factorial : ");
    scanf("%d", &n);
    printf("Factorial: %d",Fact(n));
    return 0;
}

int Fact(int n)
{
    int fact=1;

   for(int i=n; i>=1; i--)
   {
     fact=fact*i;
   }
   return(fact);
}
