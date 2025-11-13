#include<stdio.h>
int main ()
{
   int i,n;
   scanf("%d",&n) ;
   for(i=1;i<=n*n;i++)
    {

        printf("%d",n);

    if(i%n==0)
    {
        printf("\n");
}
    }

}
