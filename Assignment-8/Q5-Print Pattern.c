/*Q5.

    *
   ***
  *****
 *******
*********

*/
#include<stdio.h>

int main()
{
     for(int i=0; i<5; i++)
    {

        for(int j=0; j<=(4+i); j++)
        {
            if(j<(4-i))
                printf(" ");
            else
                printf("*");

        }
        printf("\n");
    }

    return 0;
}
