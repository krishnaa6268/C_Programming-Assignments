//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears. two or three times.

#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter three Numbers:\n");
    scanf("%d %d %d",&x,&y,&z);

     if(x>y && x>z)
        printf("Greater: %d",x);
    else
    {
        if(y>z)
            printf("Greater: %d",y);
        else
            printf("Greater: %d",z);
    }
    if(x==y || y==z || z==x)
    {
        printf("\nEqaul");
    }


    return 0;

}
