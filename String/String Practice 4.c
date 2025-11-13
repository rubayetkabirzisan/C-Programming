#include<stdio.h>
void strcopy(char *st,char *st1)
{
    int i=0;
    while(st1[i]!='\0')
    {
       st[i]=st1[i];
       i++;
    }
      st[i]='\0';

}
int main ()
{
    char st1[20]="Harry";
    char st[20];
    strcopy(st,st1);
    printf("Copied string is %s",st);

    return 0;
}

