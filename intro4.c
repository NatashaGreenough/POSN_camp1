#include<stdio.h>
int main(){
    double d,vr,vt,vf;
    scanf("%lf %lf %lf %lf",&d,&vr,&vt,&vf);
    printf("%.2lf\n",vf*d/(vt-vr));
    return 0;

}
