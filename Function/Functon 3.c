#include<stdio.h>
int main ()
{
    double base,expo,result;

    printf("Enter Base : ");
    scanf("%lf",&base);

    printf("Enter Exponential : ");
    scanf("%lf",&expo);

    result = pow(base,expo);
    printf("The result is %.2lf",result);

}
