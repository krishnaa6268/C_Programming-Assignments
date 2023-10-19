//18. Write a program which takes the month number as an input and display number of days in that month.

#include<stdio.h>

int main()
{
    int n;
    printf("Enter Month Number:\n");
    scanf("%d", &n);

    if(n==2 || n==4 || n==6 || n==9 || n==11)
    {
        if(n==2)
        {
            printf("28 or 29 Days in that month.");
        }
        else
        {
            printf("30 Days in that month.");
        }
    }
    else
    {
          printf("31 Days in that month.");
    }


    getch();
    return 0;
}
