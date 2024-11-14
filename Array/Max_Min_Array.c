#include <stdio.h>
int main(){
    int a[5],Max,Min,i;

    printf("Enter 5 numbers:\n");
    for(i=0; i<5; i++){
        scanf("%d",&a[i]);
    }

    Max = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > Max) {
            Max = a[i];
        }
    }
    {
        printf("Maximum element is : %d\n", Max);
    }

    Min = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] < Min) {
            Min = a[i];
        }
    }

    printf("Minimum element is : %d\n", Min);

    return 0;
}


