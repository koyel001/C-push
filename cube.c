// cube of an user input

#include <stdio.h>

int main() {
    int n, cube;

    printf("Enter a number: ");
    scanf("%d", &n);

    cube = n * n * n;

    printf("The cube of %d is: %d\n", n, cube);

    return 0;
}
