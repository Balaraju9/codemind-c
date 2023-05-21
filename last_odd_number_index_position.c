#include<stdio.h>

int findLastEvenIndex(int arr[], int n) {
    int lastIndex = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            lastIndex = i;
        }
    }
    return lastIndex;
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

    // Find the index of the last even number
    int lastEvenIndex = findLastEvenIndex(arr, n);

    // Display the last even number index
    printf("%d
", lastEvenIndex);

    return 0;
}
