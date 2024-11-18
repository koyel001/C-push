#include <stdio.h>
// Call by Value method
int increment(int);
int main(void){
    int num=11;
    printf("Before Calling the function : num = %d\n",num); // 11
    increment(num);
    printf("After Calling the function : num = %d",num); // 11

}
// Defination of increment function
int increment(int n){
    n=n+2;
    return n;
}