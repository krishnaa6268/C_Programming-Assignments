//10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include<stdio.h>

int main()
{
    float cp,sp,pr,ls;
    printf("Enter the cost price and selling price of a product:\n");
    scanf("%f %f",&cp, &sp);

    if(sp>=cp)
    {
        pr=sp-cp;
       // ((pr/cp)*100);
        printf("Profit: %f",((pr/cp)*100));
    }

    else if(cp>sp)
    {
        ls=cp-sp;

        printf("Loss: %f",((ls/cp)*100));
    }

    getch();
    return 0;
}
