#include<stdio.h>
int main ()
{
    int i,n;
    scanf("%d",&n);
    int fact =1;
    for (i=n; i>=1; i--)
    {
        printf("%d",i) ;
        fact = fact * i;



    }
    printf("=%d",fact);
    return 0;
}
