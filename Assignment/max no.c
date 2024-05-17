#include <stdio.h>

int main() {
    int arr[10], max = 0, i;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum element in the array: %d\n", max);

    return 0;
}