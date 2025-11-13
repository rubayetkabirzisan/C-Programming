#include<stdio.h>
int main ()
{
   long long num,n,i,lastDigit;
   int arr[10];
   scanf("%lld",&num);
   n=num;
   for(i=0;i<10;i++)
   {
       arr[i]=0;
   }
   while(n!=0)
   {
      lastDigit = n%10;
    arr[lastDigit]++;
      n=n/10;
   }
     for(i=0;i<10;i++)
   {
       if(arr[i]>0)

     printf("%d==>%d\n",i,arr[i]);
   }

    return 0;
}

