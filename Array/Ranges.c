#include<stdio.h>
int main ()
{
    int fsum=0,lsum=0,i,temp,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++)
    {
        fsum = fsum + arr[i]/100000;
        fsum =  fsum + (arr[i]/10000)%10;
        fsum = fsum + (arr[i]/1000)%10;

    }

     for(i=0; i<n; i++)
     {
          temp = arr[i]%10;
        lsum = lsum +  temp;
        arr[i] = arr[i]/10;
     }

    for(i=0; i<n; i++)
    {
        if(fsum==lsum)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
