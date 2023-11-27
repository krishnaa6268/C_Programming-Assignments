//2. Write a function to calculate simple floaterest. (TSRS)

#include<stdio.h>

float SI(float, float, float);

float main()
{
    float p,r,t;

    printf("Enter principal, rate(%/Anmum), time(years): ");
    scanf("%f %f %f", &p, &r, &t);

    printf("Simple Interest: %0.2f ",SI(p,r,t));

    return 0;
}

float SI(float p, float r, float t)
{
    return((p*r*t)/100);

}
