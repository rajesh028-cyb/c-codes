#include <stdio.h>

int main() {
    int economySeats, businessSeats, firstClassSeats;
    float economyFare, businessFare, firstClassFare;
    float totalFare;


    printf("Enter the number of seats in Economy class: ");
    scanf("%d", &economySeats);
    printf("Enter the fare per seat in Economy class: ");
    scanf("%f", &economyFare);


    printf("Enter the number of seats in Business class: ");
    scanf("%d", &businessSeats);
    printf("Enter the fare per seat in Business class: ");
    scanf("%f", &businessFare);


    printf("Enter the number of seats in First class: ");
    scanf("%d", &firstClassSeats);
    printf("Enter the fare per seat in First class: ");
    scanf("%f", &firstClassFare);


    totalFare = (economySeats * economyFare) + (businessSeats * businessFare) + (firstClassSeats * firstClassFare);


    printf("The total fare for all classes is: %.2f\n", totalFare);

    return 0;
}
