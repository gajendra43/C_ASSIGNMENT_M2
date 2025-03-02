#include <stdio.h>

void main() {
    int num = 5; 
    int *ptr;  

    ptr = &num;  // Initialize the pointer to point to the address of num

    printf("Original value of num: %d\n", num);

   
    *ptr = 20;   // Change the value at the address stored in ptr

    printf("Modified value of num: %d\n", num);
}

