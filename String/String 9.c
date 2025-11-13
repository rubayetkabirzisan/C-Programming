#include<stdio.h>
int main ()

{
    char str1[]="Rubayet Kabir Zisan";
    char str2[]="Rubayet Kabir";

    int d = strcmp(str1,str2);

    if(d==0)
    {
        printf("Strings are equal");
    }

    else

        printf("Strings are not equal");

}
