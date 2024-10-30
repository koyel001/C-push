#include <stdio.h>

int main(void){
    FILE* fptr; // For file handling using file pointer
    char file_name[50] = "test.txt"; //Initialising the string upto 50 values
    char str;
    // printf("Enter the File Name To open: ");
    // fgets(file_name,50,stdin);

    // starting Reading the File

    printf("Reading the File...");

    fptr= fopen(file_name,"r"); // opening The File in Read Mode
    str = fgetc(fptr); // copy each character to str variable
    
    // starting The while loop until it gives EOF Error

    while (str!=EOF)
    {   
        printf("%c",str); //print each character
        str = fgetc(fptr); // Copying the Next Character
    }
    fclose(fptr); // closing the File
    return 0;
    }