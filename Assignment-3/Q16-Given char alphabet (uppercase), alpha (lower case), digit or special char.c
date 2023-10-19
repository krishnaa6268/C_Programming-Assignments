//16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character

#include<stdio.h>

int main()
{
   char c;
   printf("Enter an Character: \n");
   scanf("%c",&c);

    if( c>=65 && c<=90 )
        printf("Alphabet is in uppercase.");
    else if( c>=97 && c<=122 )
         printf("Alphabet is in lowercase.");
    else if(c>='0' && c<='9' )                //or use if(c>=48 && c<=57 )
         printf("Digit.");
    else
        printf("Special character.");


    getch();
    return 0;
}
