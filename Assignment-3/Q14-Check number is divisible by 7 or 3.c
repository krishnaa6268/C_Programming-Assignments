//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>

int main()
{
   int a;

   printf("Enter a number:\n");
   scanf("%d",&a);

   if((a%3==0) || (a%7==0))
   {
       printf("%d is Divisible by 3 or 7.",a);
   }
   else{
      printf("%d is not Divisible by 3 or 7.",a);
   }
    getch();
    return 0;
}
