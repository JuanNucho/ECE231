#include <stdio.h>
#include "output_array.h"

// Function to output the array
void output_array(int arr[], int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}