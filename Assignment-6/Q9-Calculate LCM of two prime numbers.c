//9. Write a program to calculate LCM of two prime numbers
#include<stdio.h>

int main()
{
    int a,b,p,q,s1=0,s2=0;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a ,&b);

    p=(a/2);
    q=(b/2);

    for(int i=2; i<=p; i++)
    {
        if(a%i==0)
        {
            s1=1;
            break;
        }

    }

    for(int i=2; i<=q; i++)
    {
        if(b%i==0)
        {
            s1=1;
            break;
        }

    }

    if(s1==0 && s2==0)
       printf("LCM: %d",a*b);
    else
        printf("one or Both the number is not prime.");

    return 0;
}
