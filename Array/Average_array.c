#include <stdio.h>

int main() {
    int arr[5];
    float sum = 0;
    float average;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / 5; // Calculate the average
    printf("Average of elements: %.2f\n", average);

    return 0;
}
