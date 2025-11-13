#include <stdio.h>

int main()
{
    int n, i, temp, digit, sum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Palindrome numbers from 1 to %d are: ", n);
    for (i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;

        while (temp > 0)
        {
            digit = temp % 10;
            sum = sum * 10 + digit;
            temp /= 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

