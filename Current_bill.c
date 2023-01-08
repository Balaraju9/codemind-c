#include<stdio.h>
int main(){
    float amt,tamt,b;
    scanf("%f",&b);
    if(b<=199){
        amt=b*1.20;
    }
    else if(b>=200&&b<400){
        amt=b*1.50;
    }
    else if(b>=400&&b<600){
        amt=b*1.80;
    }
    else if(b>=600){
        amt=b*2.00;
    }
    if(amt>400){
        tamt=amt+(amt*0.15);
        printf("%.2f",tamt);
    }
    else{
        tamt=amt+100;
        printf("%.2f",tamt);
        
    }
}