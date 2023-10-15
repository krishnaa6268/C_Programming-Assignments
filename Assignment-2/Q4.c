//4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>

int main()
{
   int a,b,c;

   printf("Enter Two numbers.:\n");
   scanf("%d %d",&a,&b);

   printf("Before Swapping:\na=%d, b=%d\n",a,b);

    a=a+b;

   printf("After Swapping:\na=%d, b=%d\n",(a=a-b),(b=a-b));

    return 0;
}
