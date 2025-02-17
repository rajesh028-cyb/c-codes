#include<stdio.h>

int main() {
    char name[50], gender[10], address[100];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gender: ");
    scanf("%s", gender);
    printf("Enter your address: ");
    scanf("%s", address);
    printf("\n--- User Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %s\n", gender);
    printf("Address: %s\n", address);
    return 0;
}
