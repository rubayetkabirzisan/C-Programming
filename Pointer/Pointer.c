#include<stdio.h>
int main ()
{
    int x=5;
    int *p;
    p=&x;
    printf("The value pf x = %d\n",x) ;
    printf("The value pf x = %d\n",&x) ;
    printf("The value pf x = %d\n",p) ;
    printf("The value pf x = %d\n",*p) ;
    printf("The value pf x = %d\n",&p) ;
    getch() ;
}
