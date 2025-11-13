#include <stdio.h>
int main()
{
    int n,arr[100], i, j;

    printf("Enter the number of elements for your array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements: ");
    for (i = 0; i < n; i++)
    {
        int Unique = 1;  // Flag to check if the element is unique

        // Compare the current element with the rest of the array
        for (j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                Unique = 0;  // Found a duplicate, mark as not unique
                break;
            }
        }

        if (Unique==1)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
