#include <stdio.h>
int main(void){
    int a[2][2],b[2][2];
    int mult[2][2];
    
    //Taking input from matrix a
    printf("Enter the value for matrix a \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("Matrix [%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //Taking input from matrix b
    printf("Enter the value for matrix b \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("Matrix [%d][%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    //Multiplication of two Array
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            mult[i][j]= a[i][j] * b[i][j];
        }
    }
    //printing the Multiplication
    printf("The Multiplication of Matrix a and b : \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }

return 0;

}