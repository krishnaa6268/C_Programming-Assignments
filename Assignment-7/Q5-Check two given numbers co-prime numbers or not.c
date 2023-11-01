//5. Write a program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>

int main()
{

 int a,b,gr,sh,r;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a, &b);

    gr=a>b?a:b;
    sh=a<b?a:b;

           while(r>=0)
           {
                r=gr%sh;

                if(r==0)
                {
                    //printf("HCF: %d ",sh);
                    break;
                }
                gr=sh;
                sh=r;
           }
        if(sh==1)
            printf("Numbers are co-prime.");
        else
            printf("Numbers are not co-prime.");

    getch();
    return 0;
}
