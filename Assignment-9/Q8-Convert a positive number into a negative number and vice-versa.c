//8. Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    switch(n>0)
    {
    case 1:
        printf("%d",(-n));
        break;
    case 0:
        switch(n<0)
        {
        case 1:
            printf("%d",(-n));
            break;
        case 0:
            printf("0");
            break;
        }

    }

    return 0;
}
