#include <stdio.h>

int main() {
    char n;
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u') printf("Vowel");
    else if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U') printf("Vowel");
    else printf("Consonant");

}