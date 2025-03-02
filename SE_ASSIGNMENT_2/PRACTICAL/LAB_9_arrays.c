#include <stdio.h>

void main() {
    
    int oneDArray[5];
    int i,j;
   
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &oneDArray[i]);
    }

  
    printf("You entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", oneDArray[i]);
    }
    printf("\n");

    
    int matrix[3][3];
    int sum = 0;

    
    printf("Enter 9 integers for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; 
        }
    }

  
    printf("The 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

     Print the sum of all elementsprintf("The sum of all elements in the matrix is: %d\n", sum);

}

