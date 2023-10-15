//5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>

int main()
{
  int x;
  printf("Enter a three digit number:\n");
  scanf("%d",&x);

  int u1,u2,u3;

    u1=(x%10);
    u2=(x/10%10);
    u3=(x/10/10);

  printf("Sum of Three Digit: %d",(u1+u2+u3));
  getch();

    return 0;
}
