#include <stdio.h>

int main() {
    int size, position;

    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    
    int array[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    
    printf("Enter the position (1 to %d) of the element to find: ", size);
    scanf("%d", &position);

    
    if (position >= 1 && position <= size) {
        printf("Element at position %d is: %d\n", position, array[position - 1]);
    } else {
        printf("Invalid position!\n");
    }

    
}