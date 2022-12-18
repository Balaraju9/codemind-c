#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int m,r,sum=0,t;
        scanf("%d",&t);
        m=t;
        
        while(m!=0){
            r=m%10;
            sum=sum*10+r;
            m=m/10;
            
        }
        if(sum==t) printf("True
");
        else printf("False
");
    }
}