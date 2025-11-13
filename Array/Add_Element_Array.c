#include <stdio.h>
int main()
{
    int arr[100];
    int n, i, value;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i <= n-1; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    arr[n] = value;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i <= n-1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

