#include<stdio.h>
int main(){
    int n,f;
    scanf("%d",&n);
    int a[n],i,j;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        f=1;
        for(j=0;j<n;j++){
            if(i!=j){
                f=f*a[j];
            }
        }
        printf("%d ",f);
    }
}