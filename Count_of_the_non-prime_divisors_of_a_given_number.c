#include<stdio.h>
int main(){
    int n,c,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c=0;
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    c++;
                }
            }
            if(c!=2){
                s++;
            }
            
        }
    }
    printf("%d",s);
    
            

}