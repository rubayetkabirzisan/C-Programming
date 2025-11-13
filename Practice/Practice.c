#include<stdio.h>
int main ()
{
    float c,f;
    printf("Enter temperature in farenhite  : ");
    scanf("%f",&f);
    c=(f-32)/1.8;

    printf("temperature in Celcius :%.1f\n",c);
}
