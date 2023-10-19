//8. Write a program to print squares of the first N natural numbers
#include<stdio.h>

int main()
{
    int n;
    printf("How many time you want to Print:\n");
    scanf("%d",&n);

   for(int i=1; i<=(n); i++)
   {
       printf("%d\n",i*i);
   }

    getch();
    return 0;
}

