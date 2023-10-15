//10. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. :
//(Example - number=234 and digit=9 then the resulting number is 2349)

#include<stdio.h>

int main()
{
    int x,app,unit;
    printf("Enter a number and only a digit to append:\n");
    scanf("%d %d",&x,&app);

    printf("Before(Append): x=%d\n",x);

    unit=(x%10);
    x=x-unit;
    x=x+app;

    printf("After(Append):  x=%d",x);


    return 0;
}
