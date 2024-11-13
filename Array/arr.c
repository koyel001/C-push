#include <stdio.h>
int main(void){
    int a[2][3],b[2][3];
    int sum[2][3];
     
    //Taking input for matrix a
    printf("Enter the values for matrix a : \n");
     
    for ( int i=0; i<2; i++){
        for(int j=0; j<3; j++)
        {
            printf("Matrix [%d,%d] :", i,j);
            scanf("%d",&a[i][j]);
        }
     }
      
      //Taking input for matrix b
    printf("Enter the values for matrix b : \n");
     
    for ( int i=0; i<2; i++){
        for(int j=0; j<3; j++)
        {
            printf("Matrix [%d,%d] :", i,j);
            scanf("%d",&b[i][j]);
        }
        
     }
     //sum korchi ekhane
       
    for ( int i=0; i<2; i++){
        for(int j=0; j<3; j++)
        {
            sum[i][j]= a[i][j] + b[i][j];
            
        }
     }
     // printing the sum
     printf("Sum of matrix a and b: \n");
     for ( int i=0; i<2; i++){
        for(int j=0; j<3; j++)
        {
            printf("%d ",sum[i][j]);
            
        }
        printf("\n");
     }

 return 0;   

}