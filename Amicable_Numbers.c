#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int s=0,s1=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            s=s+i;
        }
        
    }
    for(int i=1;i<b;i++){
        if(b%i==0){
            s1=s1+i;
        }
        
    }
    if (s==b&&s1==a){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
    
    
}