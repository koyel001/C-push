#include <stdio.h>

int main() {
    int arr[5], sum = 0;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; // Adding each element to sum
    }

    printf("Sum of elements: %d\n", sum);

    return 0;
}
