#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
char a[30][30],b[120];
int m,n,ch,mark[30][30],cnt,di[4]={1,-1,0,0},dj[4]={0,0,1,-1},x[110],y[110],len;
void sw(int i ,int j,int st){
        int k;
        x[st]=i,y[st]=j;
        st++;
        if(st==len){
                for(i=0;i<st;i++){
                    printf("%d %d\n",x[i],y[i]);
                }
                ch=1;
        }
        for(k=0;k<4;k++){
            if(i+di[k]<=0||i+di[k]>n||j+dj[k]<=0||j+dj[k]>m)continue;
            if(a[i+di[k]][j+dj[k]]!=b[st])continue;
            if(mark[i+di[k]][j+dj[k]]==1)continue;
            mark[i+di[k]][j+dj[k]]=1;
            sw(i+di[k],j+dj[k],st);
            mark[i+di[k]][j+dj[k]]=0;
        }
    }


int main(){
    int i,j,k;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++){
                scanf(" %c",&a[i][j]);
                a[i][j]=toupper(a[i][j]);
        }
    scanf("%d",&k);
    while(k--){
        ch=0;
        memset(mark,0,sizeof mark);
        scanf(" %s",b);
        len=strlen(b);
        for(i=0;i<len;i++){
            b[i]=toupper(b[i]);
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(a[i][j]==b[0]){
                        mark[i][j]=1;
                        sw(i,j,0);
                        mark[i][j]=0;
                }
            }}
            if(ch==0)printf("No Matching Word\n");
    }


    return 0;
}
/*
3 5
TAEPE
TULAR
STOPW
2
PEATT
HELLOWORLD
*/
