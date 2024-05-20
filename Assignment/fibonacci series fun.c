#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int limit) {
    int i;
    for (i = 0; fibonacci(i) <= limit; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int limit;
    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d:\n", limit);
    printFibonacciSeries(limit);

    return 0;
}