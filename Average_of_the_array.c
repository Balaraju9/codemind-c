#include<stdio.h>

float findAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    float average = (float)sum / n;
    return average;
}

int main() {
    int n;

    // Read the length of the array
    scanf("%d", &n);

    int arr[n];

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the average value
    float average = findAverage(arr, n);

    // Display the average value with two decimal places
    printf("%.2f
", average);

    return 0;
}
