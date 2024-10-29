#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks (0-100): ");
    scanf("%d", &marks);
    printf("You got:\n");

    if (marks >= 90 && marks <= 99) {
        printf("Grade: A\n");
    } else if (marks >= 70 && marks <= 89) {
        printf("Grade: B\n");
    } else if (marks >= 50 && marks <= 69) {
        printf("Grade: C\n");
    } else if (marks >= 25 && marks <= 49) {
        printf("Grade: D\n");
    } else if (marks >= 0 && marks <= 24) {
        printf("Grade: Failed\n");
    } else {
        printf("Invalid marks\n");
    }

    return 0;
}