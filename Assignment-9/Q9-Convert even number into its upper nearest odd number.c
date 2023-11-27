//9. Program to Convert even number into its upper nearest odd number Switch Statement

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    switch(n%2==0)
    {
    case 1:
        printf("upper nearest odd number: %d\n",(n+1));
        break;
    case 0:
        printf("Already an Odd Number...");
        break;
    }

    return 0;
}
