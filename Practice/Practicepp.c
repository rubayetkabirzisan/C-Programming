#include <stdio.h>
int main()
{
    float x, y;

    printf("Enter the value of x and y: ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("The point is at the origin.");
    }
    else if (x == 0)
    {
        printf("The point is on the y-axis.");
    }
    else if (y == 0)
    {
        printf("The point is on the x-axis.");
    }
    else
    {
        if (x > 0 && y > 0)
        {
            printf("The point is in the First quadrant.");
        }
        else if (x < 0 && y > 0)
        {
            printf("The point is in the Second quadrant.");
        }
        else if (x < 0 && y < 0)
        {
            printf("The point is in the Third quadrant.");
        }
        else
        {
            printf("The point is in the Fourth quadrant.");
        }
    }

    return 0;
}
