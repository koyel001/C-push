#include <stdio.h>

int sum(int,int); // Initialisation
int main(void){
    int num1,num2;
    num1=5;
    num2=2;
    printf("Sum of %d & %d is %d",num1,num2,sum(num1,num2));
    
    
    return 0;
}
// Declaration along with Defination
int sum(int a,int b){
    return a+b;
}