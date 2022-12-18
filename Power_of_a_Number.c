#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int h=pow(a,b);
    int g=h%c;
    printf("%d",g);
}