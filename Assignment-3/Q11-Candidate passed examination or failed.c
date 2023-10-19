//11. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33.
//Now display whether the candidate passed the examination or failed.

#include<stdio.h>

int main()
{
   float s1,s2,s3,s4,s5,per;
   printf("Enter all marks of 5 subjects out of 100: \n");
   scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);

   per=(s1+s2+s3+s4+s5)*100/500;

   if((s1>=33 && s1<=100) && (s2>=33 && s2<=100) && (s3>=33 && s3<=100) && (s4>=33 && s4<=100) && (s5>=33 && s5<=100))
    printf("candidate passed.\n");
   else
    printf("candidate failed.\n");

    printf("Percentage: %0.2f\n",per);


    getch();
    return 0;
}
