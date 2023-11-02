//11. Write a program to find the position of first 1 in LSB

#include <stdio.h>

int main()
{
    int n, bin=0, i, r, j=1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    for (i=1; n!=0; i*=10)
    {
        r=n%2;
        n/=2;
        bin = bin+(r*i);

        if(r==1)
        {

           break;
        }
        j++;
    }

     printf("Position of 1st LSB one:%d",j);


    return 0;
}
