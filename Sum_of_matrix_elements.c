#include<stdio.h>
int main(){
    int m,b;
    scanf("%d%d",&m,&b);
    int a[m][b],i,j,sum=0;
    for(i=0;i<m;i++){
        for(j=0;j<b;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<m;i++){
        for(j=0;j<b;j++){
           sum=sum+a[i][j];
        }
        
    }
    printf("%d",sum);
}