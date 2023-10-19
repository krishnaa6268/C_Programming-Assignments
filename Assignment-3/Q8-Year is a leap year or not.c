//8. Write a program to check whether a given year is a leap year or not.

#include<stdio.h>

int main()
{
    int x;
    printf("Enter a Year:\n");
    scanf("%d",&x);

    if(x%4==0 && ((x%400==0)|| (x%100!=0)))
        printf("%d is a Leap Year.",x);
    else
         printf("%d is not a Leap Year.",x);

         getch();

    return 0;

}
