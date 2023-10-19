//6. Write a program to print the first N even natural numbers

#include<stdio.h>

int main()
{
    int n;
    printf("How many time you want to Print:\n");
    scanf("%d",&n);

   for(int i=1; i<=(n*2); i++)
   {
       if(i%2==0)
       printf("%d\n",i);
   }

    getch();
    return 0;
}
