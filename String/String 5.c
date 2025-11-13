#include<stdio.h>
int main ()
{
    char s1[]= "Rubayet Kabir Zisan";

    int i=0,length=0;

    while(s1[i]!=0)
    {
        i++;
        length++;
    }

    printf("Length =  %d\n",length);

}
