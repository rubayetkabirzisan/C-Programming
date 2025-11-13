#include<stdio.h>
int main ()
{
    int salary,tax;

    scanf("%d",&salary);

       if(salary>=250000 && salary<=500000)
    {
        tax = tax +0.05*(salary- 250000);

    }
     else if(salary>=500000 && salary<=1000000)
    {
       tax = tax +0.2*(salary - 500000);

    }
         else if(salary>=1000000)
    {
       tax = tax +0.3*(salary - 1000000);

    }
    printf("Tax = %d\n",tax);
}

