#include<stdio.h>
int main(){
    int x,i=1;
    scanf("%d",&x);
    for(i=1;i<=x;i++){
        printf("%d ",i);
    }
    printf("\n");
    i=x;
    while(i>0)
    {
        printf("%d ",i);
        i--;
    }
    printf("\n");
    i=1;
    do{
            if(i%2==0)printf("%d ",i);
            i++;
    }while(i<=x);
    printf("\n");
    for(i=x;i>0;i--){
        if(i%2==0)printf("%d ",i);
    }
    printf("\n");
    i=1;
    while(i<=x){
        if(i%2==1)printf("%d ",i);
        i++;
    }printf("\n");
    i=x;
    do{
        if(i%2==1)printf("%d ",i);
        i--;
    }while(i>=0);

    return 0;
}
