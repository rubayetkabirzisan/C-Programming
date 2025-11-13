#include<stdio.h>
int main ()
{
   int x=49;
   printf("Enter any number : ");
   scanf("%d",&x);
   double result = sqrt(x);
   printf("%.2lf",result);
}
