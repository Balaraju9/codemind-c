#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c>a&&c>b){
        printf("%d",c);
    }
    else if(b>a&&b>c){
        printf("%d",b);
    }
    else{
        printf("%d",a);
    }
}