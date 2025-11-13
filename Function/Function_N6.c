#include<stdio.h>
int calcArea(int l,int b)
{
   int conc=.5*l*b;
   return conc;
}
int main ()
{
    int length=10,width=20;
    int result=calcArea(length,width);
    printf("%d",result);
}
