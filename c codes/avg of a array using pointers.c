#include <stdio.h>

int main() {
    int n, sum = 0;
    float average;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
    average = (float)sum / n;
    printf("The average of the array elements is: %.2f\n", average);
    return 0;
}
