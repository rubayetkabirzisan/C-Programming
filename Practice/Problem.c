#include<stdio.h>
int main ()
{
    int n1,n2,n3,n4,n5;
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    int max;
    max =n1;
    if(n2>max) max=n2;
    if(n3>max) max=n3;
    if(n4>max) max=n4;
    if(n5>max) max=n5;
    printf("Maximum number is %d",max);


}
