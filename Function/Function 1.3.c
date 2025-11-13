#include<stdio.h>

int sum (int a,int b)

{
    return a+b;
}

int main ()

{
    int result = sum(5,6);

    printf("The SUM is %d\n",result);

    result = sum(5,10);

    printf("The SUM is %d\n",result);
}

