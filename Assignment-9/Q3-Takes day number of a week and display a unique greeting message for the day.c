// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>

int main()
{
    int day;
    printf("Enter the day number: ");
    scanf("%d",&day);

    switch(day)
    {
    case 1:
        printf("Monday: Fresh Start...\n");
        break;
    case 2:
        printf("Tuesday: Keep going...\n");
        break;
    case 3:
        printf("Wednesday: Take some break...\n");
        break;
    case 4:
        printf("Thursday: Keep forwarding...\n");
        break;
    case 5:
        printf("Friday: The last push...\n");
        break;
    case 6:
        printf("Saturday: Just Relax...\n");
        break;
    case 7:
        printf("Sunday: Finish your backlog...\n");
        break;
    default:
        printf("Invalid Input...\n");
        break;
    }

    return 0;
}
