#include <stdio.h>

int main() {
    int row1, col1, row2, col2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &row1, &col1);
    int first[row1][col1];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &row2, &col2);
    int second[row2][col2];
    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &second[i][j]);
        }
    }
    if (col1 != row2) {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }
    int result[row1][col2];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
    printf("Product of the matrices is:\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
