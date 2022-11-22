#include <stdio.h>
#include<math.h>
int a[35][35];
int main()
{
    int q,h,w,x,y,i,j;
    scanf("%d",&q);
    while(q--){
    int maX=-1;
    scanf("%d %d",&h,&w);
    for(i=0;i<=h;i++){
        for(j=0;j<=w;j++){
            a[i][j]=2000;
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<h;i++){
        for(j=0;j<w;j++){
            if(((fabs(a[i][j]-a[i+1][j])<=10))&&(a[i][j]+a[i+1][j]>maX)){
            maX=a[i][j]+a[i+1][j];
            x=i,y=j;
            }
            if(((fabs(a[i][j]-a[i][j+1])<=10))&&(a[i][j]+a[i][j+1]>maX)){
            maX=a[i][j]+a[i][j+1];
            x=i,y=j;
            }

        }
    }
    printf("%d %d\n",x+1,y+1);

    }
    return 0;
}
/*
2
4 5
5 1 2 10 4
4 30 3 0 100
3 25 10 4 10
3 20 4 8 5
4 4
0 0 0 0
0 0 0 0
0 1 1 1
1 1 1 0

*/
