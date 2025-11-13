#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 4

void shuffle(int arr[][SIZE]) {
    int x, y, temp;
    for (int i = 0; i < SIZE * SIZE; i++) {
        x = rand() % SIZE;
        y = rand() % SIZE;
        temp = arr[x][y];
        arr[x][y] = arr[i / SIZE][i % SIZE];
        arr[i / SIZE][i % SIZE] = temp;
    }
}

int main() {
    int arr[SIZE][SIZE];
    int x, y, zero_x, zero_y;

    srand(time(NULL));

    for (int i = 0; i < SIZE * SIZE; i++) {
        arr[i / SIZE][i % SIZE] = i + 1;
    }

    shuffle(arr);

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (arr[i][j] == SIZE * SIZE) {
                zero_x = i;
                zero_y = j;
            }
        }
    }

    while (1) {
        printf("Current state:\n");
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                printf("%d\t", arr[i][j]);
            }
            printf("\n");
        }

        printf("Enter your move (w, a, s, d): ");
        char move;
        scanf(" %c", &move);

        switch (move) {
            case 'w':
                x = zero_x - 1;
                y = zero_y;
                break;
            case 'a':
                x = zero_x;
                y = zero_y - 1;
                break;
            case 's':
                x = zero_x + 1;
                y = zero_y;
                break;
            case 'd':
                x = zero_x;
                y = zero_y + 1;
                break;
            default:
                printf("Invalid move.\n");
                continue;
        }

        if (x >= 0 && x < SIZE && y >= 0 && y < SIZE) {
            arr[zero_x][zero_y] = arr[x][y];
            arr[x][y] = SIZE * SIZE;
            zero_x = x;
            zero_y = y;
        } else {
            printf("Invalid move.\n");
        }

        int count = 0;
        for (int i = 0; i < SIZE * SIZE; i++) {
            if (arr[i / SIZE][i % SIZE] == i + 1) {
                count++;
            }
        }

        if (count == SIZE * SIZE) {
            printf("You win!\n");
            return 0;
        }
    }

    return 0;
}
