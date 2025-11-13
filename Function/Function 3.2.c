#include<stdio.h>
int main ()
{
    double base,expo,result=1,i;

    printf("Enter Base : ");
    scanf("%lf",&base);

    printf("Enter Exponential : ");
    scanf("%lf",&expo);

    for(i=1;i<=expo;i++)
    {
        result=result*base;
    }

    printf("Result = %.2lf",result);
}
