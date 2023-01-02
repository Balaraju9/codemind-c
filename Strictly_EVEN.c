#include<stdio.h>
int main(){
    int n,count=0,sem=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            count++;
        }
        
    }
    for(int i=0;i<n;i++){
        if(i%2==0&&a[i]%2==0){
            sem++;
        }
    }
    if(sem==count){
        printf("True");
    }
    else{
        printf("False");
    }
}