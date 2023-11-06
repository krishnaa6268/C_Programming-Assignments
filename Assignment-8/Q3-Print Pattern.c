/*Q3.

*****
****
***
**
*

*/
#include<stdio.h>

int main()
{
     for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if( (j<(5-i)))
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
