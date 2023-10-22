//10. Write a program to calculate LCM of two prime numbers
#include<stdio.h>

int main()
{
    int a,b,gt,s,lcm=1;
    printf("Enter two numbers for LCM:\n");
    scanf("%d %d",&a ,&b);

    gt=a>b?a:b;
    s=a<b?a:b;
//Method-I

    for(int i=1; (lcm=gt*i)%s>=0; i++)
    {
        if(lcm%s==0)
          break;
    }

    printf("LCM: %d",lcm);

//Method-II

   /*
   int main()
{
    int a,b,gt,s,i=1;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a ,&b);
    gt=a>b?a:b;
    s=a<b?a:b;
    while((gt*i++)%s!=0);
    printf("%d",gt*(i-1));
}

   */

// Method-III

     /*while(1)
    {
        if(gt%a==0 && gt%b==0)
        {
           printf("LCM: %d",gt);
           break;
        }
        gt++;
    }

*/

//Method-IV

   /* int i=1;
    while(1)
    {
       lcm= gt*i;
        if(lcm%s==0)
        {
          printf("LCM: %d",lcm);
          break;
        }
      i++;
    }*/

    return 0;
}
