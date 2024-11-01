// Write a program to print the average of 3 numbers

#include <stdio.h>
int main(void) {
    float num1,num2,num3;
    printf("Enter 3 numbers:");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("Average : %.2f\n", (num1 + num2 + num3 / 3));
    return 0;
}