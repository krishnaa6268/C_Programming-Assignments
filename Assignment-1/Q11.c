//11. WAP to take time as an input in below given format and convert the time format and display the result as given below.
//User Input date format – “HH:MM”
//Output format – “HH hour and MM Minute”
//Example – “11:25” converted to “11 Hour and 25 Minute”

#include<stdio.h>

void main()
{
 int h,m;

 printf("Enter Time in format: HH:MM\n");
 scanf("%d : %d",&h,&m);


 printf("%d Hour and %d Minute",h,m);

}
