/*Q2.

             *
          *  *
       *  *  *
    *  *  *  *
 *  *  *  *  *

*/
#include<stdio.h>

int main()

{
    int j=1;
    for(int i=0; i<j; i++)
    {
        for(j=0; j<5; j++)
        {
            if(j>=(4-i))
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }


    return 0;
}
