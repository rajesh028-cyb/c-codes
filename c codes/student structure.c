#include <stdio.h>
struct student {
    int roll_no;
    char name[50];
    float marks[3];
};
int main() {
    struct student s;
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    getchar();
    printf("Enter name : ");
    scanf("%[^\n]%*c", s.name);
    printf("Enter marks for three subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
    }
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Marks in subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: %.2f\n", i + 1, s.marks[i]);
    }
    return 0;
}
