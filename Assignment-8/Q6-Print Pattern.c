/*Q6.

*********
 *******
  *****
   ***
    *

*/
#include<stdio.h>

int main()
{
     for(int i=0; i<5; i++)
    {
        for(int j=0; j<(9-i); j++)
        {
            if(j<i)
                printf(" ");
            else
                printf("*");

        }
        printf("\n");
    }

    return 0;
}
