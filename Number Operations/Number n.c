#include<stdio.h>
void f(int n)
{
    if(n==0) return;
    printf("%d ",n);
    f(n-1);
}
int main ()
{
    f(7);
    return 0;
}
