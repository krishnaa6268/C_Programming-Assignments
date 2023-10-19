//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>

int main()
{
   char c;
   printf("Enter an Alpabate: \n");
   scanf("%c",&c);

    if( c>=65 && c<=90 )
        printf("Alphabet is in uppercase.");
    else if( c>=97 && c<=122 )
         printf("Alphabet is in lowercase.");


    getch();
    return 0;
}
