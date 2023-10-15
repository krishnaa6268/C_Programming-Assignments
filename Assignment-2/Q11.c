//11. Assume price of 1 USD is INR 83.2825. Write a program to take the amount in INR and convert it into USD.

#include<stdio.h>

int main()
{
    float usd=83.2825, inr;

    printf("Enter INR to Convert it into USD:\n");
    scanf("%f",&inr);

    printf("INR TO USD: %6.4f",(inr/usd));
    getch();

    return 0;
}
