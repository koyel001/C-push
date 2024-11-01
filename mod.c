// Check if a number is divisible by 2 or not

#include <stdio.h>
#include <math.h>
int main(void) {

    int i;
    printf("Enter a Number:");
    scanf("%d", &i);
    printf("%d", i % 2 == 0);
    return 0;
}
