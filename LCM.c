#include <stdio.h>

int findLCM(int a, int b) {
    int max = (a > b) ? a : b;
    int lcm = max;
    
    while (1) {
        if (lcm % a == 0 && lcm % b == 0)
            break;
        lcm += max;
    }
    
    return lcm;
}

int main() {
    int a, b;
   
    scanf("%d %d", &a, &b);
    
    int lcm = findLCM(a, b);
    
    printf("%d
", lcm);
    
    return 0;
}
