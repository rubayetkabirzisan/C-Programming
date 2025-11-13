#include <stdio.h>
int main()
{
    int n, arr[100], i, j, count, oddNum;

    printf("Enter the number of elements for your array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 0;

        // Count the occurrence of the current element
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        // If the occurrence count is odd, we found the number
        if (count % 2 != 0)
        {
            oddNum = arr[i];
            break;
        }
    }

    printf("The number occurring odd number of times: %d\n", oddNum);

    return 0;
}
