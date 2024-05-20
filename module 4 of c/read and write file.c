#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char inputFileName[50], outputFileName[50];
    char ch;

    printf("Enter the name of the input file: ");
    scanf("%s", inputFileName);

    inputFile = fopen(inputFileName, "r");

    if (inputFile == NULL) {
        printf("Input file not found.\n");
        return 1;
    }

    printf("Enter the name of the output file: ");
    scanf("%s", outputFileName);

    outputFile = fopen(outputFileName, "w");

    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Data copied from '%s' to '%s' successfully.\n", inputFileName, outputFileName);

    return 0;
}