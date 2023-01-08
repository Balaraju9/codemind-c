#include<stdio.h>
int main(){
    int n,t,pro=1,sum=0,r;
    scanf("%d",&n);
    t=n;
    while(t!=0){
        r=t%10;
        pro=pro*r;
        sum=sum+r;
        t=t/10;
        
    }
    int e=pro-sum;
    printf("%d",e);
}