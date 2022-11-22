#include<stdio.h>
int a[20][20],b[20][20],c[20][20];
int main(){
    int i,j,k,a[20][20],i1,j1,i2,j2;
    scanf("%d %d %d %d",&i1,&j1,&i2,&j2);
    if(j1!=i2){printf("Can't Multiply."); return 0;}
    for(i=0;i<i1;i++){
                for(j=0;j<j1;j++){
                scanf("%d",&a[i][j]);}
                }
    for(i=0;i<i2;i++){
                for(j=0;j<j2;j++){
                scanf("%d",&b[i][j]);}
                }
    for(i=0;i<i1;i++){
                for(j=0;j<j2;j++){
                    for(k=0;k<j1;k++)c[i][j]+=a[i][k]*b[k][j];
                }}
        for(i=0;i<i1;i++){
                    for(j=0;j<j2;j++){printf("%d ",c[i][j]);

                }printf("\n");}


    return 0;
}
