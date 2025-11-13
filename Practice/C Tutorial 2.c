#include<stdio.h>
int main ()
{
    int year ;
    printf("Enter a year : ") ;
    scanf("%d",&year) ;
    if (year%400==0)
    {
        printf("leap year");
    }
    else if (year%100!=0 && year%4==0)
    {
        printf("leap year");
    }
    else
    {
        printf("Not leap year");
    }
    return 0;
}
