//7. Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>

int main()
{
    int a;
   printf("Enter a numbers.:\n");
   scanf("%d",&a);

    (a%2==0)?printf("Even"):printf("Odd");


    return 0;
}
