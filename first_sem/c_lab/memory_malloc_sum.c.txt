// Memory allocation and sum calculation
#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p;
    int sum = 0;
    // Allocate memory for 5 integers
    p = (int *)malloc(5 * sizeof(int));  // Allocate memory for an integer
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }
    for (int i = 0; i < 5; i++) {
        printf("ENTER THE INTEGER %d: ", i + 1);
        scanf("%d", &p[i]); // Read integers into allocated memory
    }
    for (int j = 0; j < 5; j++)
    {
        sum += p[j]; // Calculate sum
    }
    
    printf("SUM OF INTEGERS : %d\n", sum);
    return 0;
}