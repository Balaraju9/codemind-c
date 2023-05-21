#include<stdio.h>
#include<stdbool.h>

bool isElementPresent(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, i, element;

    // Read the length of the array
    scanf("%d", &n);

    int arr[n];

    // Read the array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to check for appearance
    scanf("%d", &element);

    // Check if the element is present in the array
    bool isPresent = isElementPresent(arr, n, element);

    // Display True or False based on the result
    if (isPresent) {
        printf("True
");
    } else {
        printf("False
");
    }

    return 0;
}
