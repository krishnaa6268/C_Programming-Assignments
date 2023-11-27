/* 8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)

      where n represents the number of items,
      and r represents the number of items being chosen at a time.
*/

#include<stdio.h>

int nPr(int , int );
int Fact(int);

int main()
{
    int n,r;
    printf("Enter value of n and r : ");
    scanf("%d %d", &n, &r);
    printf("nPr: %d",nPr(n,r));
    return 0;
}

int nPr(int n, int r)
{
    return(Fact(n)/Fact(n-r));
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

