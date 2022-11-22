#include<stdio.h>
int main(){
    int x ;
    scanf("%d",&x);
    x= x%360;
    if(x<0){
        x=x+360;
    }
    if(x==0 || x==180){
        printf("x-axis");
    }
    else if(x==90||x==270){
        printf("y-axis");
    }
    else if(x<90){
        printf("1");
    }
    else if(x<180){
        printf("2");
    }
    else if(x<270){
        printf("3");
    }
    else if(x<360){
        printf("4");
    }
    return 0;
}
