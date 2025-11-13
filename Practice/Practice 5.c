#include<stdio.h>
int main ()
{
    int i,n;
    scanf("%d",&n) ;
    for(i=1; i<=n; i++)
    {
        printf("%d",i)  ;
        if(i==n)
        {
            printf("=");
        }

        else
        {
            printf("+");
        }
    }
    printf("%d",n*(n+1)/2);
    return 0;
}

