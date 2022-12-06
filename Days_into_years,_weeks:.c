#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int z=n/365;
    int w=(n-(z*365))/7;
    printf("%d
",z);
    printf("%d
",w);
    
}