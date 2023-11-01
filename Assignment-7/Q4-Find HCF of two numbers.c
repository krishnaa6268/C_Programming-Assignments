//4. Write a program to calculate HCF of two numbers

#include<stdio.h>

int main()
{
    int a,b,gr,sh,hcf;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a, &b);

    gr=a>b?a:b;
    sh=a<b?a:b;

           while(hcf>=0)
           {
                hcf=gr%sh;

                if(hcf==0)
                {
                    printf("HCF: %d ",sh);
                    break;
                }
                gr=sh;
                sh=hcf;
           }

    return 0;
}
