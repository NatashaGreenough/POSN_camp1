#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a==0){
        a=pow(c,2)-pow(b,2);
        printf("%.2lf",sqrt(a));
    }
    if(b==0){

        b=pow(c,2)-pow(a,2);
        printf("%.2lf",sqrt(b));
    }
    if(c==0){

        c=pow(a,2)+pow(b,2);
        printf("%.2lf",sqrt(c));
    }
}
