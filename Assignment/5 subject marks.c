#include <stdio.h>

int main() {
    int marks[5];
    float total = 0, percentage;

    printf("Enter marks of 5 subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (total / 500) * 100;

    printf("\nTotal marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage > 75)
        printf("Grade: Distinction\n");
    else if (percentage > 60 && percentage <= 75)
        printf("Grade: First class\n");
    else if (percentage > 50 && percentage <= 60)
        printf("Grade: Second class\n");
    else if (percentage > 35 && percentage <= 50)
        printf("Grade: Pass class\n");
    else
        printf("Grade: Fail\n");

    return 0;
}