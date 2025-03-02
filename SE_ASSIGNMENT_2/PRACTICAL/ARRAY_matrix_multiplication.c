#include <stdio.h>

 void main() {
    int i, j, k;
    int A[3][3], B[3][3], sum[3][3], product[3][3];

   
    printf("Enter elements of matrix A (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element A[%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    
    printf("Enter elements of matrix B (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Enter element B[%d][%d]: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }

   
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

   
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            product[i][j] = 0;
            for(k = 0; k < 3; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

   
    printf("\nResultant matrix after addition is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

   
    printf("\nResultant matrix after multiplication is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

   
}

