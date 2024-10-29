// Perimeter of Rectangle

#include <stdio.h>
int main() {
    float a, b, perimeter;

    printf("Enter the length of side a: ");
    scanf("%f", &a);
    printf("Enter the length of side b: ");
    scanf("%f", &b);

    perimeter = 2 * (a + b);

    printf("The perimeter of the rectangle is: %.2f\n", perimeter);

    return 0;
}
