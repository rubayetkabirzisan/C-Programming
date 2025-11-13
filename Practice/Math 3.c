#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter two numbers X,Y : ");
    scanf("%d %d",&x,&y);
    double result = pow(x,y);
    printf("%.1lf",result);

}
