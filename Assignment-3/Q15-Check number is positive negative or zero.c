//15. Write a program to check whether a given number is positive, negative or zero

#include<stdio.h>

int main()
{
   int a;

   printf("Enter a number:\n");
   scanf("%d",&a);

   if(a>0)
   {
       printf("%d is Positive.",a);
   }
   else if(a<0)
   {
       printf("%d is Negative.",a);
   }
        else
       {
            printf("%d is Zero.",a);
       }

    getch();

    return 0;
}

