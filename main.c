// main.c
#include <stdio.h>
#include "statistics.h"
#include "output_array.h"

int main() {
    int array1[5] = {1, 2, 3, 4, 5};
    
    printf("For Array 1:\n");
    output_array(array1, 5);  // Print the array

    int sum = calculate_sum(array1, 5);
    printf("Sum: %d\n", sum);
    
    float avg = calculate_average(array1, 5);
    printf("Average: %.2f\n", avg);
    
    float std = calculate_std(array1, 5);
    printf("Standard Deviation: %.2f\n", std);
    
    int max = find_max(array1, 5);
    printf("Max: %d\n", max);
    
    int min = find_min(array1, 5);
    printf("Min: %d\n", min);
    
    int abs_diff = abs_difference(max, min);
    printf("Absolute Difference between Max and Min: %d\n", abs_diff);
    
    return 0;
}
