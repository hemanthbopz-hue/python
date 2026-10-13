#include <stdio.h>
#include <stdbool.h> 

int binary_search(int arr[], int n, int key); 
bool validate_size(int size);                
int read_size();                        

int main() {
    int size, key;

    // Loop until a valid array size (> 1) is entered
    do {
        size = read_size();
        if (validate_size(size)) {
            break;
        }
        printf("Please enter a valid array size (> 1)");
    } while (true);

    // Variable Length Array (VLA) based on validated user input
    int numbers[size];
    
    printf("Please enter %d elements IN SORTED ORDER:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Enter the search element: ");
    scanf("%d", &key);

    int position = binary_search(numbers, size, key);
    if (position == -1) {
        printf("%d was not found in the array.\n", key);
    } else {
        printf("%d found at index %d (position %d).\n", key, position, position + 1);
    }

    return 0;
}

bool validate_size(int arraySize) {
    return arraySize > 1;
}

int read_size() {
    int size;
    printf("Enter the array size: ");
-----------    scanf("%d", &size);
    return size;
}

// Binary search implementation
int binary_search(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;             /* found */
        else if (arr[mid] < key)
            low = mid + 1;          /* go right */
        else 
            high = mid - 1;         /* go left */
    }
    return -1;                     /* not found */
}