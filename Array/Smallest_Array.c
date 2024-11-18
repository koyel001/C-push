#include <stdio.h>

int main() {
    int arr[5], min;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0]; // Assume first element is the smallest
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Minimum element: %d\n", min);

    return 0;
}
