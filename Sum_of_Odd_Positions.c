#include<stdio.h>

int findSumOfOddIndices(int arr[], int n) {
    int sum = 0;
    for (int i = 1; i < n; i += 2) {
        sum += arr[i];
    }
    return sum;
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

    // Find the sum of elements at odd indices
    int sum = findSumOfOddIndices(arr, n);

    // Display the sum
    printf("%d
", sum);

    return 0;
}
