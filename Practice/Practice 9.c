#include<stdio.h>
int main ()
{
    int n,i;
    bool flag = false;
    scanf("%d",&n);
    for(i=2; i<=n-1; i++)
    {
        if(n%i==0)
        {
            flag = true;
            break;
        }
    }

    if(flag==false)
    {
        printf("PRIME");
    }
    else
    {
        printf("NOT PRIME");
    }
    return 0;
}
