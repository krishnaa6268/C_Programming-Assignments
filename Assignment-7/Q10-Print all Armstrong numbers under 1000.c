//10. Write a program to print all Armstrong numbers under 1000

#include <stdio.h>
#include<math.h>

int main()
{
    int n,count,r,arm=0,x,y;
    printf("Armstrong Numbers under 1000:\n");

        //loop for printing range...
    for(n=1; n<1000; n++)
	{
        r=n;
        for(count=1; r/10>0; count++) // for digit counting to calculate power...
        {
            r=r/10;
        }
        int arm=0,x,y;
        x=n;
        y=n;

        for(int i=0; i<count; i++) // main logic for arm...
        {
            x=x%10;
            arm +=pow(x,count);
            y=y/10;
            x=y;
        }
        if(n == arm)
            printf("%d\n",n);

	}

	return 0;
}
