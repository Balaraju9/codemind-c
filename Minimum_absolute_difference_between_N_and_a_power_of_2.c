#include<stdio.h>
#include<math.h>
int main(){
    int n,s,b,p;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        p=pow(2,i);
        if(n>=p){
            s=abs(n-p);
        }
        else{
            b=abs(n-p);
            break;
        }
        
    }
    if(s>b){
        printf("%d",b);
    }
    else{
        printf("%d",s);
    }
    
}