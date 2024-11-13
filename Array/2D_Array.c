#include<stdio.h>

int main()
{
    // Two-dimensional array declaration
    int Matrices[3][3]; 

    // Prompt for user to understand the program's purpose
    printf("This program will print numbers from 1-9 in matrix form:\n\n");

    // Input loop for filling the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter a number (1-9): ");
            scanf("%d", &Matrices[i][j]);
        }
    }

    printf("\nMatrix form of entered numbers:\n\n");

    // Output loop for displaying the matrix in a structured format
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", Matrices[i][j]);
        }
        printf("\n");
    }

    printf("\nThat's the matrix form of numbers from 1-9.\n");
    return 0;
}
