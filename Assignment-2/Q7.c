//7. Write a program to check whether the given number is even or odd using a bitwise operator. (Most Imp. Question: Btt-Manipulation)

#include<stdio.h>

int main()
{
    int a;
   printf("Enter a numbers.:\n");
   scanf("%d",&a);

    (a&1)?printf("Odd"):printf("Even");  //odd: LSB=>1 and Even: LSD=>0


    return 0;
}
