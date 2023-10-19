//3. Write a program to print the first N natural numbers in reverse order

#include<stdio.h>

int main()
{
    int n;
    printf("How many time you want to Print:\n");
    scanf("%d",&n);


   for(int i=n; i>0; i--)
   {
       printf("%d\n",i);
   }

    getch();
    return 0;
}
