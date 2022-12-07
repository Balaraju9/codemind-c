#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int h=c*2;
    int l=b+h;
    if(l>=a){
        printf("Qualify");
    }
    else{
        printf("Not Qualify");
    }
}