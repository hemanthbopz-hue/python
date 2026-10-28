#include<stdio.h>
#include<stdlib.h>
int main() {
    int *p;
    p = (int *)calloc(5, sizeof(int)); // Allocate memory for 5 integers and initialize to zero
    printf("Address of allocated memory: %p\n", p); // Display the address of allocated memory
    if (p == NULL) {
        printf("Memory is not allocated\n");
        return 1; // Exit if memory allocation fails
    }
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &p[i]); // Read integers into allocated memory
    }
    printf("Display the integers:\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d\n", p[j]); // Display the integers
    }
    free(p); // Free the allocated memory
    p = NULL;
    printf("Display the integers after free():\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d\n", p[j]); // Display the integers after freeing memory
    }
    return 0;
}