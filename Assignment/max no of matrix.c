#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int matrix[ROWS][COLS];
    int max_num;


    printf("Enter %d elements of the matrix (%d x %d):\n", ROWS * COLS, ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    max_num = matrix[0][0];

    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] > max_num) {
                max_num = matrix[i][j];
            }
        }
    }

    
    printf("The maximum number in the matrix is: %d\n", max_num);

    
}