#include<stdio.h>
int main ()
{
    float i,n,sum=0;
    printf("Enter n = ");
    scanf("%f",&n);
    for(i=1.5;i<=n; i++)
    {
        sum=sum+i;
    }
    printf("Sum = %.1f\n",sum);

    getch ();
}
