#include<stdio.h>
int main()
{
    char str1[50]="My name is ";
    char str2[]="Rubayet Kabir Zisan";


    int i=0,length=0,j=0;

    while(str1[i]!='\0')
    {
        i++;
        length++;
    }

    while(str2[j]!='\0')
    {
        str1[length+j]=str2[j];
        j++;
    }

    printf("Str1 = %s\n",str1);
}
