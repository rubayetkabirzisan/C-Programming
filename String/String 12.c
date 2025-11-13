#include<stdio.h>
int main ()
{
    char str1[30]= "Rubayet Kabir Zisan";
    char str2[30];

    int i=0,lenth=0,j;

    while(str1[i]!='\0')
    {
        i++;
        lenth++;
    }

    for(j=0, i=lenth-1; i>=0; i--, j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';

    printf("Str1 = %s\n",str1);
    printf("Str2 = %s\n",str2);

    int d = strcmp(str1,str2);

    if(d==0)

        printf("String is Palindrome");

    else
        printf("String is not a Palindrome");
}
