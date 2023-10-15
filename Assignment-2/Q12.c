//12. Write a program to take a three digit number from the user and rotate its digits by one position towards the right.

#include<stdio.h>

int main()
{
    int x,u1;
    printf("Enter a three digit number:\n");
    scanf("%d",&x);

    printf("Before(Rotate): x=%d\n",x);

    u1=(x%10);
    x=((u1*100)+(x/10)); // Simple Method...

    printf("After(Rotate):  x=%d",x);


/*
    int u2,u3;

    u2=(x/10%10);
    u3=(x/10/10);

    printf("%d",((u1*100)+(u3*10)+u2)); // Complex and lengthy method...

*/

    return 0;
}

