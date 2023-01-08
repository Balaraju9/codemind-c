#include<stdio.h>
int main(){
    int n,r,re=0;
    scanf("%d",&n);
    int t=n;
    while(t!=0){
        r=t%10;
        re=re*10+r;
        t=t/10;
    }
    if(re==n){
        printf("True");
    }
    else{
        printf("False");
    }
}