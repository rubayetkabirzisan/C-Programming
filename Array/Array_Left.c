#include <stdio.h>
int main()
{
    int arr[100],size, num_rotations, i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d elements of array: ", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of rotations: ");
    scanf("%d", &num_rotations);

    // rotate the array
    for(i=0; i<num_rotations; i++)
    {
        temp = arr[0];
        for(j=0; j<size-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[size-1] = temp;
    }

    printf("Array after left rotation: ");
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
