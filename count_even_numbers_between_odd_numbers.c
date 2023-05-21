#include<stdio.h>

int main() {
    int n, i, count = 0;

    // Read the length of the array
    scanf("%d", &n);

    int arr[n];

    // Read the array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count the even numbers between odd numbers
    for(i = 1; i < n - 1; i++) {
        if(arr[i] % 2 == 0 && arr[i - 1] % 2 != 0 && arr[i + 1] % 2 != 0) {
            count++;
        }
    }

    // Display the count of even numbers
    printf("%d
", count);

    return 0;
}
