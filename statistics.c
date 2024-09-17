#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "statistics.h"

// Function to calculate the sum of an array
int calculate_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of an array
float calculate_average(int arr[], int size) {
    int sum = calculate_sum(arr, size);
    return (float)sum / size;
}

// Function to calculate the standard deviation of an array
float calculate_std(int arr[], int size) {
    float avg = calculate_average(arr, size);
    float sum_squared_diff = 0;
    for (int i = 0; i < size; i++) {
        sum_squared_diff += (arr[i] - avg) * (arr[i] - avg);
    }
    return sqrt(sum_squared_diff / size);
}

// Function to find the maximum of an array
int find_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum of an array
int find_min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to calculate the absolute difference between max and min
int abs_difference(int max, int min) {
    return abs(max - min);
}