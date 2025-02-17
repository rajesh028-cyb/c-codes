#include <stdio.h>

int main() {
    int x, y, temp;
    printf("Enter first integer (x): ");
    scanf("%d", &x);
    printf("Enter second integer (y): ");
    scanf("%d", &y);
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter swapping (Call by Value):\n");
    printf("x = %d, y = %d\n", x, y);
    int *ptr_x = &x;
    int *ptr_y = &y;
    temp = *ptr_x;
    *ptr_x = *ptr_y;
    *ptr_y = temp;
    printf("\nAfter swapping (Call by Reference):\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
