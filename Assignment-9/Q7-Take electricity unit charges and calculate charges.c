/*
7. Program to take the value from the user as input electricity unit charges and calculate
total electricity bill according to the given condition . Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
#include<stdio.h>

int main()
{
    float u,bill,sur;
    printf("Enter electricity units : ");
    scanf("%f", &u);

    switch((u<=50) && (u>0))
    {
    case 1:
        bill= (0.50*u);
        sur=(bill*20)/100;
        printf("Bill: %0.2f",(bill+sur));
        break;
    case 0:
        switch((u<=150) && (u>50))
        {
        case 1:
           bill= (0.75*u);
           sur=(bill*20)/100;
           printf("Bill: %0.2f",(bill+sur));
            break;
        case 0:
            switch((u<=250) && (u>150))
            {
            case 1:
                bill= (1.20*u);
                sur=(bill*20)/100;
                printf("Bill: %0.2f",(bill+sur));
                break;
            case 0:
                bill= (1.50*u);
                sur=(bill*20)/100;
                printf("Bill: %0.2f",(bill+sur));
                break;
            }
        }

    }

    return 0;
}
