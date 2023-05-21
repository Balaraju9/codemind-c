#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n],i,key;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
   for(i=0;i<n;i++){
       if(key==a[i]){
           c=c+1;
       }
    }
    printf("%d",c);
}