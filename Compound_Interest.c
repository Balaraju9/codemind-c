// CI = P(1+R/100)T - P.
#include<stdio.h>
#include<math.h>

int main(){
    float p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    float h;
    h=p*pow(1.0+(r/100.0),t)-p;
    printf("%0.2f",h);
}