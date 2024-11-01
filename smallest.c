// WAP to print the smallest of 3 numbers

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Finding the smallest number using if-else structure
    int smallest = num1;  // Assume num1 is the smallest
    if (num2 < smallest) smallest = num2;  // Update smallest if num2 is smaller
    if (num3 < smallest) smallest = num3;  // Update smallest if num3 is smaller

    printf("The smallest number is: %d\n", smallest);
    return 0;
}
