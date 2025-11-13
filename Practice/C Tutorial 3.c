#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter a letter : ") ;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("Capital");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("Small");
    }
    else
    {
        printf("Not a number");
    }
    return 0;
}
