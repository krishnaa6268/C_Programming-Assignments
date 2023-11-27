//6. Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>

int main()
{
    int x;
    printf("Enter a year: ");
    scanf("%d", &x);

    switch(x%4==0 && ((x%400==0)|| (x%100!=0)))
    {
    case 1:
      printf("%d is a Leap Year.",x);
       break;
    case 0:
        printf("%d is not a Leap Year.",x);
        break;
    default:
        printf("invalid...\n");
        break;
    }

    return 0;
}

