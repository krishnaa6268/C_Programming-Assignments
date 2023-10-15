// Write a program to make the last digit of a number stored in a variable as zero.: (Example - if x=2345 then make it x=2340)

#include<stdio.h>

int main()
{
    int x,unit;
    printf("Enter a number:\n");
    scanf("%d",&x);

    printf("Before: x=%d\n",x);

    unit=(x%10);
    x=x-unit;

    printf("After:  x=%d",x);


    return 0;
}
