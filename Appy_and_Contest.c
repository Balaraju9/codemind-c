#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
         int n,a,b,k,c;
         scanf("%d%d%d%d",&n,&a,&b,&k);
         c=(n/a)+(n/b);
         if(c>=k){
             printf("Win
");
         }
         else{
             printf("Lose
");
         }
         
    }
    
}