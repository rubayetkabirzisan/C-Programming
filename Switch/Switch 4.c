#include<stdio.h>
int main ()
{
    char ch;
    float c,f;
    printf("Enter the value of choice \n1.C\n2.F\n");
    scanf("%c",&ch);
    switch(ch)
    {

    case 'C':
    {
        printf("Enter temperature in Celcius : ");
        scanf("%f",&c);
        f=((9*c)/5)+32;
        printf("Converted Temperature in Farenheight : %.2f",f);
    }
    break;

    case 'F':
    {
        printf("Enter temperature in  Farenheight : ");
        scanf("%f",&f);
        c=((f-32)/9)*5;
        printf("Converted Temperature in Celcius : %.2f",c);

    }
    break;

    default :
        printf("Invalid Option");
    }
}
