#include<stdio.h>
#include<math.h>
int main(){
    double x,y;
    scanf("%lf ",&x);
    scanf("%lf",&y);
    printf("Plus: %.2lf\n",x+y);
    printf("Minus: %.2lf\n",x-y);
    printf("Multiply: %.2lf\n",x*y);
    printf("Divide: %.2lf\n",x/y);
    printf("Modulo: %.2lf\n",fmod(x,y));
    double a = pow(x,y);
    printf("Power: %.2lf\n",a);
    double b = pow(x,1/y);
    printf("Root: %.2lf\n",b);
    return 0;
}
