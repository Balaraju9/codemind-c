#include<stdio.h>
int main(){
    float h,d,p,g,b;
    scanf("%f%f%f",&b,&h,&d);
    p=b*0.12;
    g=b+p+h+d;
    printf("%.2f
%.2f",p,g);
}