#include <stdio.h>

int main() {
    FILE *filePointer;
    char fileName[50];
    char data[1000];

    printf("Enter the name of the file: ");
    scanf("%s", fileName);

    filePointer = fopen(fileName, "r");

    if (filePointer == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while (fgets(data, sizeof(data), filePointer) != NULL) {
        printf("%s", data);
    }

    fclose(filePointer);

    return 0;
}