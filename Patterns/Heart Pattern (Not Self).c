#include <stdio.h>

int main() {
    int i,j, rows;

    printf("Enter the number of rows\n");
    scanf("%d", &rows);


    /* printing inverted start pyramid */
    for(i = rows; i >= 1; i--){
        for(j = i; j < rows; j++){
            printf(" ");
        }
        for(j = 1; j <= (i*2)-1; j++){
            printf("*");
        }
        /* move to next row */
        printf("\n");
    }

    return 0;
}
