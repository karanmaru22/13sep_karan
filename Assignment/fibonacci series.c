#include <stdio.h>

int main() {
    int num, first = 0, second = 1, next;

    printf("Enter a number to print Fibonacci series up to: ");
    scanf("%d", &num);

    printf("Fibonacci Series up to %d:\n", num);
    printf("%d, %d, ", first, second);

    next = first + second;
    while (next <= num) {
        printf("%d, ", next);
        first = second;
        second = next;
        next = first + second;
    }

    return 0;
}