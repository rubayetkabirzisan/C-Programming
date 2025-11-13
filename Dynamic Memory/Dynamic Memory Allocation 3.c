#include<stdio.h>
int main ()
{
    int *ptr;
    ptr = (int*)malloc(10*sizeof(int));

    for(int i=0;i<10;i++)
    {
        printf("\n7 x %d = %d\n",i+1,(7*(i+1)));

    }

    ptr = realloc(ptr,15*sizeof(int));

    printf("\nAfter reallocation......\n");


    for(int i=0;i<15;i++)
    {
        printf("\n7 x %d = %d\n",i+1,(7*(i+1)));

    }


    return 0;
}

