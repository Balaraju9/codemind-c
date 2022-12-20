#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float s=(a+b+c)/2;
    float h=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",h);
}