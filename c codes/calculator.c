#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2, result, choice;
    printf("enter first numbers :");
    scanf("%d",&num1);
    printf("enter second number :");
    scanf("%d",&num2);
    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Square of a number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Addition result: %d\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Subtraction result: %d\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Multiplication result: %d\n", result);
            break;
        case 4:
            if(num2 != 0) {
                printf("Division result: %.2f\n", (float)num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        case 5:
            if(num2 != 0) {
                result = num1 % num2;
                printf("Modulus result: %d\n", result);
            } else {
                printf("Error! Modulus by zero.\n");
            }
            break;
        case 6:
            result = num1 * num1;
            printf("Square of %d is: %d\n", num1, result);
            break;
        default:
            printf("Invalid option is choosed\n");
    }

    return 0;
}
