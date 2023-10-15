//5. Write a program to input a three digit number and display the sum of the digits.

#include<stdio.h>

int main()
{
  int a,b,c;
  printf("Enter Three numbers.:\n");
  scanf("%d %d %d",&a,&b,&c);

  printf("Sum of Three Digit: %d",(a+b+c));
  getch();
    return 0;
}
