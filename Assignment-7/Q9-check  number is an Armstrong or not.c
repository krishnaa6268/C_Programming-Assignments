//9. Write a program to check whether a given number is an Armstrong number or not.

/*An Armstrong number (named so after Michael F. Armstrong), also called a narcissistic number, a pluperfect digital invariant,
or a plus perfect number, is a number that is equal to the sum of its own digits when they are raised to the power of the number of digits. */

#include <stdio.h>
#include<math.h>

int main()
{
    int n,r,count;
    printf("Enter a number to Check Armstrong or not: ");
    scanf("%d", &n);

    r=n;
    for(count=1; r/10>0; count++)
        r=r/10;
        printf("Digits: %d\n", count);   //for counting digits of number

    int arm=0,x,y;
    x=n;
    y=n;

   for(int i=0; i<count; i++)
   {
       x=x%10;
       arm +=pow(x,count);
       y=y/10;
       x=y;
   }

   if(n== arm)
       printf("%d is Armstrong Number.",n);
   else
       printf("%d is not Armstrong Number.",n);

    getch();
	return 0;
}
