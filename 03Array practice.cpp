#include<stdio.h>
int a[1010];
int main(){
    int i,n,num,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
                scanf("%d",&a[i]);
                scanf("%d",&num);

    for(i=0;i<n;i++){
            if(a[i]==num){
                            c++;}}
    for(i=n-1;i>=0;i--){
        printf("%d",a[i]);}
        printf("\n");

        printf("%d",c);

    return 0;
    }
