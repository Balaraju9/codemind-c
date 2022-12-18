#include <stdio.h>

int main() {
    int l,b,w,c,tc,area;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    int g=((l+2*w)*(b+2*w))-(l*b);
    int s=c*g;
    printf("%d",s);

}