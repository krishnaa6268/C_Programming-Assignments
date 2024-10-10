//1. Write a function to calculate LCM of two numbers. (TSRS)

#include<stdio.h>

int LCM(int, int);

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("LCM of %d and %d is %d. ",a,b,LCM(a,b));

    return 0;
}

int LCM(int a, int b)
{
    int gr,sh,hcf;
     gr=a>b?a:b;
     sh=a<b?a:b;
           while(hcf>=0)
           {
                hcf=gr%sh;

                if(hcf==0)
                {
                    return (a*b/sh);   //used LCM * HCF = a*b {Relation b/w lcm and hcf}
                    break;
                }
                gr=sh;
                sh=hcf;
           }
}
