#include <stdio.h>

int main() {
    int rows = 4, num = 1, i, j;

    for (i = 0; i < rows; i++) {
        
        for (j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }
        
        for (j = 0; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}