//3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter first N odd natural numbers:\n");
    scanf("%d",&n);

   for(int i=1; i<=(n*2); i++)
   {
      if(i%2 != 0)
       sum=sum+i;
   }

    printf("Sum of first N odd natural numbers: %d \n",sum);

    return 0;
}
