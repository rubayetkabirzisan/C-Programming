#include<stdio.h>
int occurence(char str[],char c)
{
    char *ptr=str;
    int count =0;
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main ()
{
    char str[]="Harry";
    int count = occurence(str,'r');
    printf("Occurences = %d",count);

    return 0;
}
