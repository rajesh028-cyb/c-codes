#include <stdio.h>

int main() {
    int n, target, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("Element %d found at index %d.\n", target, i);
            return 0;
        }
    }
    printf("Element %d not found in the array.\n", target);
    return 0;
}
