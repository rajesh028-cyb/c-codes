#include <stdio.h>

int main() {
int age1, age2, age3;
printf("Enter the age of person 1: ");
scanf("%d", &age1);
printf("Enter the age of person 2: ");
scanf("%d", &age2);
printf("Enter the age of person 3: ");
scanf("%d", &age3);

if (age1 >= age2 && age1 >= age3) {
    printf("The oldest person is %d years old.\n", age1);
    }
    else if (age2 >= age1 && age2 >= age3)
    {
        printf("The oldest person is %d years old.\n", age2);
    }
    else
     {
        printf("The oldest person is %d years old.\n", age3);
    }
return 0;
}
