// WAP to print if a character is digit or not

#include <stdio.h>
int main(void) {

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("%s\n", (ch >= '0' && ch <= '9') ? "Digit" : "Not a digit");
    return 0;
}