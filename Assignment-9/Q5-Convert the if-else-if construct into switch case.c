/*
5. Convert the following if-else-if construct into switch case:
if(var == 1)
printf("good");
else if(var == 2)
printf("better");
else if(var == 3)
printf("best");
else
printf("invalid");
*/
#include<stdio.h>

int main()
{
    int var;
    printf("Enter a Value: ");
    scanf("%d", &var);

    switch(var==1)
    {
    case 1:
       printf("good...\n");
       break;
    case 0:
        switch(var==2)
        {
        case 1:
            printf("better...\n");
            break;
        case 0:
            switch(var==3)
            {
            case 1:
                printf("best...\n");
                break;
            case 0:
                printf("invalid...\n");
                break;
            }
        }
    }

    return 0;
}
