//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Find cubes of first N natural numbers:\n");
    scanf("%d",&n);

   for(int i=1; i<=n; i++)
   {
     sum=sum+(i*i*i);
   }

    printf("Sum of cubes of first N natural numbers: %d \n",sum);

    return 0;
}
