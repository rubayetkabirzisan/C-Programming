#include <stdio.h>
int present(char *str, char h)
{
    char *ptr = str;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == h)
        {
            count++;
        }

        ptr++;
    }
    return count;
}
int main()
{
    char str[50], c;
    printf("Enter your string :\n");
    gets(str);
    printf("\nEnter a char to check presence in your string:\n");
    scanf("%c", &c);
    int count = present(str, c);

    if (count > 0)
    {
        printf("\nIt exists on your string\n");
    }
    else
    {
        printf("It doesn't exist in your string");
    }
    return 0;
}

