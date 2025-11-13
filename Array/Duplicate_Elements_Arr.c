#include <stdio.h>
int main()
{
    int n,arr[100], i, j, count = 0;

    printf("Enter the size of elements for your array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Iterate through each element in the array
    for (i = 0; i < n - 1; i++)
    {
        // Check if the current element is a duplicate
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;  // Once a duplicate is found, break the inner loop
            }
        }
    }

    printf("Total number of duplicate elements: %d\n", count);

    return 0;
}
