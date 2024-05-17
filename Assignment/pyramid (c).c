#include <stdio.h>

int main() {
    int rows = 4, i, j;

    for (i = 0; i < rows; i++) {
        
        for (j = 0; j < i; j++) {
            printf("   ");
        }
        
        for (j = i; j < rows; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}