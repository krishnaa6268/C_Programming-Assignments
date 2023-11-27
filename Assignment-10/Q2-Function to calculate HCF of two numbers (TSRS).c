//2. Write a function to calculate HCF of two numbers. (TSRS)

#include<stdio.h>

int HCF(int, int);

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("HCF of %d and %d is %d. ",a,b,HCF(a,b));

    return 0;
}

int HCF(int a, int b)
{
    int gr,sh,hcf;
     gr=a>b?a:b;
     sh=a<b?a:b;

           while(hcf>=0)
           {
                hcf=gr%sh;

                if(hcf==0)
                {
                    return sh;
                    break;
                }
                gr=sh;
                sh=hcf;
           }
           //LCM * HCF = a*b {Relation b/w lcm and hcf}
}
