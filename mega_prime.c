#include<stdio.h>
int main(){
    int g,c=0,s1=0,s2=0,r,s3=0;
    scanf("%d",&g);
    for(int i=1;i<=g;i++){
        if(g%i==0){
            c++;
        }
        
    }
    if(c==2){
        while(g>0){
            r=g%10;
            s1++;
            s2=0;
            for(int j=1;j<=r;j++){
                if(r%j==0){
                    s2++;
                }
            }
                if(s2==2){
                    s3++;
                }
            
            g=g/10;
        }
        
    if(s1==s3){
        printf("Mega Prime");
    }
    else{
        
        printf("Not Mega Prime");
    }
        
        
    }else{
        
        printf("Not Mega Prime");
    }
        
    
}