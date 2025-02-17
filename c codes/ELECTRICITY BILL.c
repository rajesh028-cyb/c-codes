#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    float unitsConsumed, totalAmount, surcharge;
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter units consumed: ");
    scanf("%f", &unitsConsumed);
    if (unitsConsumed <= 199) {
        totalAmount = unitsConsumed * 1.20;
    }
    else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        totalAmount = unitsConsumed * 1.50;
    }
    else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        totalAmount = unitsConsumed * 1.80;
    }
    else {
        totalAmount = unitsConsumed * 2.00;
    }
    if (totalAmount > 400) {
        surcharge = totalAmount * 0.15;
        totalAmount += surcharge;
    }
    if (totalAmount < 100) {
        totalAmount = 100;
    }
    printf("\n--- Electricity Bill ---\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Total Bill: Rs. %.2f\n", totalAmount);

    return 0;
}
