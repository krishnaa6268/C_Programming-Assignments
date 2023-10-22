//2. Write a program to calculate
#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter first N even natural numbers:\n");
    scanf("%d",&n);

   for(int i=1; i<=(n*2); i++)
   {
      if(i%2==0)
       sum=sum+i;
   }

    printf("Sum of first N even natural numbers: %d \n",sum);

    return 0;
}
