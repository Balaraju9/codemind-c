#include<stdio.h>
int main(){
    int n,r,f=0;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        f=f*10+r;
        n=n/10;
    }
    printf("%d",f);
}