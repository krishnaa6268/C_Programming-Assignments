//10. Write a program in C to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 using the function.

#include<stdio.h>

void SeriesSum();
int Fact(int );

int main()
{
    SeriesSum();
    return 0;
}

void SeriesSum()
{
    int sum=0;
    for(int i=1; i<=5; i++)
    {
        sum=(sum + Fact(i)/i);
    }
     printf("Sum of series[1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5]: %d",sum);
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
