//important
#include<stdio.h>
int main ()
{
    int first[10][10],second[10][10],result[10][10],i,j,k,r1,r2,c1,c2,sum=0;

    printf("Enter rows & columns for first matrix : ");
    scanf("%d%d",&r1,&c1);

    printf("Enter rows & columns for second matrix : ");
    scanf("%d%d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error!! Column of first matrix not equal row of second matrix");

        printf("Enter rows & columns for first matrix : ");
        scanf("%d%d",&r1,&c1);

        printf("Enter rows & columns for second matrix : ");
        scanf("%d%d",&r2,&c2);

    }

    printf("\nEnter element for first matrix :\n");

    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)

        {
            printf("first[%d][%d] = ",i,j);
            scanf("%d",&first[i][j]);
        }

    }

    printf("\nEnter element for second matrix :\n");

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)

        {
            printf("second[%d][%d] = ",i,j);
            scanf("%d",&second[i][j]);
        }

    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k]*second[k][j];

            }

            result[i][j] = sum;
            sum = 0;
        }
    }
    printf("\n\nFirst Matrix\n");

    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)
            printf("%d ",first[i][j]);
        printf("\n");
    }

    printf("\n\nSecond Matrix\n");

    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
            printf("%d ",second[i][j]);
        printf("\n");
    }

    printf("\n\nResult Matrix\n");

    for(i=0; i<r1; i++)
    {

        for(j=0; j<c2; j++)

            printf("%d ",result[i][j]);
        printf("\n");
    }

}
