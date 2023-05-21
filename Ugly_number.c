#include <stdio.h>

int isUgly(int num) {
    // Handle edge case of 0
    if (num <= 0) {
        return 0;
    }
    
    // Divide the number by 2, 3, and 5 until it is no longer divisible
    while (num % 2 == 0) {
        num /= 2;
    }
    
    while (num % 3 == 0) {
        num /= 3;
    }
    
    while (num % 5 == 0) {
        num /= 5;
    }
    
    // If the resulting number is 1, it is an ugly number
    return num == 1;
}

int main() {
    int num;
    
   
    scanf("%d", &num);
    
    // Check if the number is an ugly number
    int is_ugly = isUgly(num);
    
    // Print the result
    printf("%s
", is_ugly ? "Ugly Number" : "Not Ugly Number");
    
    return 0;
}
