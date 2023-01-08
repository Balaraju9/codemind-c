#include<stdio.h>
int main(){
    int n,cn=0,a=0,b=1,c;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        c=a+b;
        if(n==c){
            cn++;
            break;
        }
        a=b;
        b=c;
    }
    if(cn==0){
        printf("False");
    }
    else{
        printf("True");
    }
}