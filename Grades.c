#include<stdio.h>
int main(){
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int z=a+b+c+d+e;
    int h=z/5;
    if(h>90){
        printf("Grade A");
    }
    else if(h>=80&&h<90){
        printf("Grade B");
    }
    else if(h>=70&&h<80){
        printf("Grade C");
    }
    else if(h>=60&&h<70){
        printf("Grade D");
    }else if(h>=40&&h<60){
        printf("Grade E");
    }
    else if(h<40){
        printf("Grade F");
    }
    
    
}