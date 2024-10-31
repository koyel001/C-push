// Write content in file

#include <stdio.h>

int main(void) {
    FILE* fptr; // File pointer for file handling
    char file_name[50] = "example.txt"; // File name
    char str[] = "Hello I am Koyel."; // String content to write

    // Open the file in write mode
    fptr = fopen(file_name, "w");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error: Could not open file %s\n", file_name);
        return 1; // Return with error code
    }

    // Write content to the file
    fprintf(fptr, "%s", str);

    // Close the file
    fclose(fptr);

    printf("Content written to %s successfully.\n", file_name);
    return 0;
}
