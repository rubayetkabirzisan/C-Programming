#include<stdio.h>
void calculatePower(double base,double exp)
{
   double result=1,i;

   for(i=1;i<=exp;i++)

    {
        result=result*base;
    }

    printf("Result = %.1lf",result);

}

int main ()

{
    double base,exp;

    printf("Enter Base : ");
    scanf("%lf",&base);

    printf("Enter Exponential : ");
    scanf("%lf",&exp);

    calculatePower(base,exp);

}
