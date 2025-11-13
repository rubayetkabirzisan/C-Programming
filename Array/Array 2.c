#include<stdio.h>
int main ()
{
    int a[5]= {10,20,30,40,50};
    int i,sum=0;
    for(i=0; i<5; i++)
    {
        sum = sum + a[i];

    }
    printf("The sum is %d\n",sum);
    printf("The average is %.2f\n",(float)sum/5);

}
