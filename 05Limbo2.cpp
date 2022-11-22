#include<stdio.h>
char a[1010][110];
int x,y,cnt,mi=1000000,di[8]={-1,1,0,0,1,1,-1,-1},dj[8]={0,0,-1,1,1,-1,-1,1};
void limbo(int i ,int j){
   if(i<0||i>=y||j<0||j>=x) return;
   if(a[i][j]=='.')return;
   cnt++;
   a[i][j]='.';
   int k;
   for(k=0;k<8;k++)
    limbo(i+di[k],j+dj[k]);
}
int main(){
    int i,j;
    scanf("%d %d",&x,&y);
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            if(a[i][j]=='*'){
                cnt=0;
                limbo(i,j);
                if(cnt<mi)
                    mi=cnt;
            }
        }
    }
    printf("%d",mi);
    return 0;
}
