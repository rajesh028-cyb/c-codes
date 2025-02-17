#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;
    sourceFile = fopen("start.txt", "r");
    destFile = fopen("destination.txt", "a");
    ch = fgetc(sourceFile);
    fputc(ch, destFile);
    ch = fgetc(sourceFile);
     fputc(ch, destFile);
    fclose(sourceFile);
    fclose(destFile);
    printf("Data successfully appended from source.txt to destination.txt.\n");
    return 0;
}
