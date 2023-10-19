//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

#include<stdio.h>

int main()
{
   int a;

   printf("Enter a number:\n");
   scanf("%d",&a);

   if((a%2==0)&& (a%3==0))
   {
       printf("%d is Divisible by 2 and 3.",a);
   }
   else{
      printf("%d is not Divisible by 2 and 3.",a);
   }
    getch();
    return 0;
}
