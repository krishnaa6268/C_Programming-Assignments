//9. Write a function to check whether a given number contains a given digit or not (TSRS)
#include<stdio.h>

int CheckDigit(int, int);

int main()
{
    int num, dig;
    printf("Enter a number to check digit : ");
    scanf("%d %d", &num, &dig);

    if(CheckDigit(num, dig)== 1)
        printf("%d contains digit %d", num, dig);
    else
        printf("%d not contains digit %d", num, dig);

    return 0;
}

int CheckDigit(int n, int d)
{
    for(int i=0; n!=0; i++)
    {
        if((n%10)== d)
        {
            return 1;
        }
        if(n==0)
            return 0;

        n=n/10;
    }
}
