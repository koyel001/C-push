/* #include <stdio.h>

int main() {
  int i = 0;
  
  while (i < 5) {
    printf("%d\n", i);
    i++;
  }
  
  return 0;
}*/



/*#include <stdio.h>

int main() {
  int i = 0;
  
  do {
    printf("%d\n", i);
    i++;
  }
  while (i < 5);
  
  return 0;
}
*/

/*#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 99) {
        printf("Grade: A\n");
    } else if (marks >= 70 && marks <= 89) {
        printf("Grade: B\n");
    } else if (marks >= 50 && marks <= 69) {
        printf("Grade: C\n");
    } else if (marks >= 25 && marks <= 49) {
        printf("Grade: D\n");
    } else if (marks >= 0 && marks <= 24) {
        printf("Grade: Failed\n");
    } else {
        printf("Invalid marks\n");
    }

    return 0;
}
*/


        
    #include <stdio.h>

    int main() {
    int marks;

    printf("Enter the marks (0-100): ");
    scanf("%d", &marks);

    switch (marks) {
        
        case 100:
            printf("Grade: A\n");
            break;
        case 90 ... 99:
            printf("Grade: A\n");
            break;
        case 70 ... 89:
            printf("Grade: B\n");
            break;
        case 50 ... 69:
            printf("Grade: C\n");
            break;
        case  25 ... 49:
            printf("Grade: D\n");
            break;
        case   0 ... 24:
            printf("Grade: Failed\n");
            break;
        default:
            printf("Invalid ");
            break;
    }

    return 0;
}

       