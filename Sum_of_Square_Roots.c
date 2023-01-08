#include<stdio.h>
#include<math.h>
int main(){
    float a,b,h,s=0;
    scanf("%f%f",&a,&b);
    for(int i=a;i<=b;i++){
        h=sqrt(i);
        s=s+h;
    }
    printf("%.2f",s);
}