#include<stdio.h>
int main(){
    int n,s=0,j=0,c;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s=s+i;
        j=j+i*i;
    }
    c=s*s-j;
    printf("%d",c);
}