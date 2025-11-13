#include<stdio.h>
int main ()
{
    int i, n, odd = 0, even = 0, sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Numbers: ");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d+", i);
            even += i;
        }
        else
        {
            printf("%d-", i);
            odd += i;
        }
    }
    sum = odd - even;
    printf("\b = %d", sum);
    return 0;
}

