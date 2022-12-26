#include<stdio.h>
#include<math.h>
int main(){
    int n,t1,c=0,t2,r,sum=0;
    scanf("%d",&n);
    int h=n;
    t1=n;
    t2=n;
    while(n!=0){
        n=n/10;
        c++;
    }
    while(t1!=0){
        r=t1%10;
        sum=sum+pow(r,c);
        c--;
        t1=t1/10;
    }
    if(sum==h){printf("True");}
    else{printf("False");}
}