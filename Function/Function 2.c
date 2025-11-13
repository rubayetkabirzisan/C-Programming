#include<stdio.h>
double trianglearea(double b,double h);

int main ()
{
    double base,height;
    printf("Enter Base : ");
    scanf("%lf",&base);

    printf("Enter Height : ");
    scanf("%lf",&height);

    double area = trianglearea(base,height);
    printf("Area = %.lf",area);

}

double trianglearea(double b,double h)

{
   return 0.5  *b * h;
}
