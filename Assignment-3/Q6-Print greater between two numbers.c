//6. Write a program to print greater between two numbers. Print one number if both are the same.

#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter two Numbers:\n");
    scanf("%d %d",&x,&y);

    if(x>y)
        printf("Greater: %d",x);
    else
    {
        if(y>x)
            printf("Greater: %d",y);
        else
            printf("Same Number: %d",x);
    }

    return 0;

}
