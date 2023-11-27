/*
4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit
*/
#include<stdio.h>

int main()
{
    int ch,a,b,c;

    while(1)
    {
               printf("Enter the Choice: \n");
               printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not. \n");
               printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not. \n");
               printf("3. Check whether a given set of three numbers are equilateral triangle or not. \n");
               printf("4. Exit \n\n");
        scanf("%d",&ch);

        switch(ch)
    {
    case 1:
         printf("Enter Lengths: \n");
         scanf("%d %d %d",&a, &b, &c);
         if(a==b || b==c || c==a)
            printf("Isoscles Triangle.\n");
         else
            printf("Not an Isoscles Triangle.\n");
         break;
    case 2:
         printf("Enter Lengths: \n");
         scanf("%d %d %d",&a, &b, &c);
         if((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == b*b + a*a))
            printf("Right angled triangle Triangle.\n");
         else
            printf("Not a right angled triangle Triangle.\n");
         break;
    case 3:
         printf("Enter Lengths: \n");
         scanf("%d %d %d",&a, &b, &c);
         if(a==b && b==c && c==a)
            printf("Equilateral Triangle.\n");
         else
            printf("Not an equilateral Triangle.\n");
         break;
    case 5:
         exit(0);

    default:
        printf("Invalid choice...\n");
        break;
    }

    }

    return 0;
}

