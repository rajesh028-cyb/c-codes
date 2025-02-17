#include<stdio.h>

int main() {
    char name[50], city[50], state[50], email[50], college[50], hsc[50], sslc[50];
    char phone[20], skills1[50], skills2[50], certification[50], project[50], hobby[50];
    int pin;
    printf("Enter your name, city, state, PIN, phone number, email, college, HSC qualification, SSLC qualification, first skill, second skill, certification, project, and hobby:\n");
    scanf("%[^\n]%*c", name);
    scanf("%[^\n]%*c", city);
    scanf("%[^\n]%*c", state);
    scanf("%d%*c", &pin);
    scanf("%[^\n]%*c", phone);
    scanf("%[^\n]%*c", email);
    scanf("%[^\n]%*c", college);
    scanf("%[^\n]%*c", hsc);
    scanf("%[^\n]%*c", sslc);
    scanf("%[^\n]%*c", skills1);
    scanf("%[^\n]%*c", skills2);
    scanf("%[^\n]%*c", certification);
    scanf("%[^\n]%*c", project);
    scanf("%[^\n]%*c", hobby);
    printf("\n                                          ************BIO DATA***********\n");
    printf("_____________________________\n\n");
    printf("%s,%s\t\t\t\t%s\n", city, state, name);
    printf("India,PIN-%d\n", pin);
    printf("Ph.no: %s\n", phone);
    printf("Email: %s\n\n", email);
    printf("Education Qualification\n");
    printf("_____________________________\n\n");
    printf("College: %s\n", college);
    printf("HSC: %s\n", hsc);
    printf("SSLC: %s\n\n", sslc);
    printf("Skills\t\t: %s\n", skills1);
    printf("\t\t: %s\n\n", skills2);
    printf("Certification\t: %s\n", certification);
    printf("Project\t\t: %s\n\n", project);
    printf("Hobby\t\t: %s\n", hobby);
    printf("______________________________\n\n");
    return 0;
}
