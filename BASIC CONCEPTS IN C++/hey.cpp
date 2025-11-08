#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL;  // Pointer to hold the array
    int size = 0;       // Current number of elements
    int capacity = 2;   // Initial capacity

    array = (int *)malloc(capacity * sizeof(int)); // Initial allocation

    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    char choice;
    int value;

    do {
        // Check if array is full
        if (size == capacity) {
            capacity *= 2; // Double the capacity
            array = (int *)realloc(array, capacity * sizeof(int));
            if (array == NULL) {
                printf("Memory reallocation failed!\n");
                return 1;
            }
        }

        printf("Enter a number to add to the array: ");
        scanf("%d", &value);
        array[size] = value;
        size++;

        printf("Do you want to add another number? (y/n): ");
        scanf(" %c", &choice);  // space before %c to clear newline buffer
    } while (choice == 'y' || choice == 'Y');

    // Display the array
    printf("\nYou entered: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array); // Always free dynamically allocated memory

    return 0;
}
