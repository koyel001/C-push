#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 1; i <= 5; i++) { // rows
        for (j = 1; j <= i; j++) {  // columns
            printf("%d", i);  // Print the row number
        }
        printf("\n");  // next line
    }
    
    return 0;
}
