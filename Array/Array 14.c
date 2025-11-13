#include<stdio.h>
int main ()
{
    int A[3][3],i,j,upperSum=0,lowerSum=0;
    printf("\nEnter the elements for the matrix :\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEntered Matrix\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",A[i][j]);

        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
            {
                upperSum = upperSum + A[i][j];
            }

            if(i>j)
            {
                lowerSum = lowerSum + A[i][j];
            }
        }

    }

    printf("\nSum of upper triangle elements = %d\n",upperSum);
    printf("\nSum of lower triangle elements = %d\n",lowerSum);
}
