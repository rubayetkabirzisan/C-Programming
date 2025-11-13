#include <stdio.h>
void print(int i, int n)
{
    for(int k = 0; k < n; k++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int i, n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int a[n], freq[k];

    // Initialize freq array to all zeros
    for(i = 0; i < k; i++)
    {
        freq[i] = 0;
    }

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }

    for(i = 0; i < k; i++)
    {
        print(i, freq[i]);
    }

    return 0;
}

