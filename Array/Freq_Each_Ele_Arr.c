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

    int freq[n];

    for (i = 0; i < n; i++)
    {
        freq[i] = 1;  // Initialize frequency of each element to 1

        // Compare the current element with the remaining elements
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                freq[i]++;
                freq[j] = 0;  // Mark the duplicate element frequency as 0
            }
        }
    }

    printf("Frequency of each element:\n");
    for (i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("The frequency of %d is %d.\n", arr[i], freq[i]);
        }
    }

    return 0;
}
