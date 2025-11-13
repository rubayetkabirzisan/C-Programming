#include <stdio.h>
int main()
{
    int arr[100], even[100], odd[100];
    int n, i, even_count = 0, odd_count = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        // Checking if the element is even or odd
        if (arr[i] % 2 == 0)
        {
            even[even_count] = arr[i];
            even_count++;
        }
        else
        {
            odd[odd_count] = arr[i];
            odd_count++;
        }
    }

    printf("Even elements: ");
    for (i = 0; i < even_count; i++)
    {
        printf("%d ", even[i]);
    }

    printf("\nOdd elements: ");
    for (i = 0; i < odd_count; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
