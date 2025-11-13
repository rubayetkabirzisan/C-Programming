#include<stdio.h>
int main ()
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {


        if(i%2==1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }

    return 0;
}
