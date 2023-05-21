#include <stdio.h>

int isUniqueNumber(int n) {
    int digitCount[10] = {0};
    
    while (n > 0) {
        int digit = n % 10;
        digitCount[digit]++;
        if (digitCount[digit] > 1)
            return 0;  // Not a unique number
        n /= 10;
    }
    
    return 1;  // Unique number
}

int main() {
    int n;
 
    scanf("%d", &n);
    
    if (isUniqueNumber(n))
        printf("Unique Number
");
    else
        printf("Not Unique Number
");
    
    return 0;
}
