#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("start.txt", "w");
    fprintf(file, "Hiii\n");
    fprintf(file, "byee\n");
    fclose(file);
    file = fopen("example.txt", "r");
    char line1[256], line2[256], line3[256];
    fgets(line1, 256, file);
    printf("%s", line1);
    fgets(line2, 256, file);
    printf("%s", line2);
    fclose(file);
    return 0;
}
