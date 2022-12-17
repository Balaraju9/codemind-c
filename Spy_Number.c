#include<stdio.h>
int main(){
    int n,sum=0,sum1=1,r;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        sum=sum+r;
        sum1=sum1*r;
        n=n/10;
    }
    if(sum==sum1&&sum1==sum){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}