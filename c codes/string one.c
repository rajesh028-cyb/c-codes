#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    printf("\nLength of the first string: %lu\n", strlen(str1));
    printf("Length of the second string: %lu\n", strlen(str2));
    strcpy(str3, str1);
    printf("\nCopy of the first string: %s\n", str3);
    int result = strcmp(str1, str2);
    if (result == 0)
        printf("\nThe strings are equal.\n");
    else if (result < 0)
        printf("\nThe first string is less than the second string.\n");
    else
        printf("\nThe first string is greater than the second string.\n");
    printf("\nReversed first string: ");
    for (int i = strlen(str1) - 1; i >= 0; i--) {
        putchar(str1[i]);
    }
    printf("\n");
    printf("\nLowercase of the first string: ");
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = str1[i] + ('a' - 'A');
        }
    }
    printf("%s\n", str1);
    printf("\nUppercase of the first string: ");
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            str1[i] = str1[i] - ('a' - 'A');
        }
    }
    printf("%s\n", str1);
    strcat(str1, str2);
    printf("\nConcatenated string: %s\n", str1);
    return 0;
}
