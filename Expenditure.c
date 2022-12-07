#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int h=b*30;
    if(a>=h){
        printf("YES");
    }
    else{
        printf("NO");
    }
}