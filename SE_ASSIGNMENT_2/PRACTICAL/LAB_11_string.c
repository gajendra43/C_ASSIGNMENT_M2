#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100]; 
    char result[200]; 

   
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

 
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

   
    strcpy(result, str1);
    strcat(result, str2);

  
    printf("Concatenated string: %s\n", result);

  
    printf("Length of concatenated string: %lu\n", strlen(result));

}

