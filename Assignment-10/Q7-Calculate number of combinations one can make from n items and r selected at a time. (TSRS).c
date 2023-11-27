/* 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time[ nCr = n! / r! * (n - r)!]. (TSRS)
      where n represents the number of items,
      and r represents the number of items being chosen at a time.
*/

#include<stdio.h>

int nCr(int , int );
int Fact(int);

int main()
{
    int n,r;
    printf("Enter value of n and r : ");
    scanf("%d %d", &n, &r);
    printf("nCr: %d",nCr(n,r));
    return 0;
}

int nCr(int n, int r)
{
    return(Fact(n)/(Fact(r)*Fact(n-r)));
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
