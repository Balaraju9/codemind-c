#include<stdio.h>
int main(){
    float i,n,s=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        s=(1/i)+s;
        
    }
    printf("%.2f",s);
}