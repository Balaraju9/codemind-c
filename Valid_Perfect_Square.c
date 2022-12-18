#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a;
        scanf("%d",&a);
        int f=sqrt(a);
        if(a%f==0) printf("True
");
        else printf("False
");
    }
}