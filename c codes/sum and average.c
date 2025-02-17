#include <stdio.h>

int main() {
    int num1, num2, num3, sum;
    float average;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    sum = num1 + num2 + num3;
    average = sum / 3.0;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}
