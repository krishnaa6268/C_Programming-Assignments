//3. Write a program to swap values of two int variables.

#include<stdio.h>

int main()
{
   int a,b,c;

   printf("Enter Two numbers.:\n");
   scanf("%d %d",&a,&b);

   printf("Before Swapping:\na=%d, b=%d\n",a,b);
   c=a;
   a=b;
   b=c;

   printf("After Swapping:\na=%d, b=%d\n",a,b);

    return 0;
}

