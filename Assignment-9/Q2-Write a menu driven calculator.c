/*
 2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
 */
#include<stdio.h>

int main()
{
    int ch,n1,n2;

    while(1)
    {
        printf("Enter the Choice: \n1. Addition\n2. Subtraction\n3. Multiplication \n4. Division \n5. Exit\n ");
        scanf("%d",&ch);

        switch(ch)
    {
    case 1:
         printf("Enter two number: \n");
         scanf("%d %d",&n1, &n2);
         printf("Addition: %d\n",(n1+n2));
         break;
    case 2:
         printf("Enter two number: \n");
         scanf("%d %d",&n1, &n2);
         printf("Subtraction: %d\n",(n1-n2));
         break;
    case 3:
         printf("Enter two number: \n");
         scanf("%d %d",&n1, &n2);
         printf("Multiplication: %d\n",(n1*n2));
         break;
    case 4:
         printf("Enter two number: \n");
         scanf("%d %d",&n1, &n2);
         printf("Division: %d\n",(n1/n2));
        break;
    case 5:
         exit(0);
    default:
        printf("Invalid Input...\n");
        break;
    }

    }

    return 0;
}

