#include <stdio.h>

int main() {
int num, square, cube;
printf("Enter an integer: ");
scanf("%d", &num);
square = num * num;
cube = num * num * num;
printf("Square: %d\n", square);
printf("Cube: %d\n", cube);
return 0;
}
