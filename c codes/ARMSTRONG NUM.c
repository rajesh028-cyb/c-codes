#include <stdio.h>
#include <math.h>

int main() {
    int num, original_num, remainder, sum = 0, digits;
    printf("Enter a number: ");
    scanf("%d", &num);
    original_num = num;
    digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    num = original_num;
    while (num != 0) {
        remainder = num % 10;
        sum += pow(remainder, digits);
        num /= 10;
    }
    if (sum == original_num) {
        printf("%d is an Armstrong number.\n", original_num);
    } else {
        printf("%d is not an Armstrong number.\n", original_num);
    }
  return 0;
}
