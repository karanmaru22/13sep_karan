
#include <stdio.h>

void stringCopy(char *source, char *destination) {
    while ((*destination++ = *source++));
}

int main() {
    char source[100], destination[100];

    printf("Enter the source string: ");
    scanf("%s", source);

    stringCopy(source, destination);

    printf("Copied string: %s\n", destination);

    return 0;
}