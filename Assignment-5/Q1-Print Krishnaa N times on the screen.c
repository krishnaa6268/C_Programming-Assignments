//1. Write a program to print "Krishnaa" N times on the screen
#include<stdio.h>

int main()
{
    int n;
    printf("How many time you want to Print:\n");
    scanf("%d",&n);

   for(int i=0; i<n; i++)
   {
       printf("Krishnaa\n");
   }

    getch();
    return 0;
}
