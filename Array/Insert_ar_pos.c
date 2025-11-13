#include <stdio.h>
int main()
{
    int arr[100];
    int n, i, value, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    for (i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos - 1] = value;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i <= n-1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
