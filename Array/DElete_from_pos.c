#include <stdio.h>
int main()
{
    int arr[100];
    int n, i, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position");
        return 0;
    }

    for (i = pos - 1; i <= n - 2; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    printf("Array after deletion: ");
    for (i = 0; i <= n-1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
