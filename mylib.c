#include <stdio.h>
#include <math.h>
#include "mylib.h"  // Include the header file

// Function to calculate the sum of an array
int calculate_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];  // Add each element to sum
    }
    return sum;
}

// Function to calculate the average of an array
float calculate_average(int arr[], int size) {
    int sum = calculate_sum(arr, size);
    return (float)sum / size;  // Convert to float to avoid integer division
}

// Function to calculate the standard deviation of an array
float calculate_std(int arr[], int size) {
    float avg = calculate_average(arr, size);
    float sum_squared_diff = 0;
    for (int i = 0; i < size; i++) {
        sum_squared_diff += (arr[i] - avg) * (arr[i] - avg);  // Squared difference from the average
    }
    return sqrt(sum_squared_diff / size);  // Return the square root of the average squared difference
}