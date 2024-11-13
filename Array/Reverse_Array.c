#include <stdio.h>
int main(void){
    int a[5] = {5,6,7,8,9};
    int length = sizeof(a) / sizeof(a[4]);
    printf("Length = %d\n",length);

    //Reversing the Array
    //Two pointer Approach
    int left=0 , right=length-1;
    while(left < right){
        a[left] = a[left] + a[right];
        a[right] = a[left] - a[right];
        a[left] = a[left] - a [right];

        left++;
        right--; 
    } 
    //Displaying the reverse Array
    printf("Reversed Array \n");
    for(int i=0; i<length; i++){
        printf("%d ",a[i]);
    }
    return 0;
} 