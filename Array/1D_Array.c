#include <stdio.h>

int main() {
    int arr[5]; // Declare an array of 5 integers

    // Taking input from the user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the array elements
    printf("You entered: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
