#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int n,r,k,a[14],mark[14],cnt;
void C(int st,int b){
    int i;
    if(st==r){
        cnt++;
        if(cnt==k){
            for(i=0;i<st;i++){
                printf("%d ",a[i]);
            }
            exit(0);

        }
        return;
    }
    for(i=b;i<=n;i++){
        if(!mark[i]){
            mark[i]=1;
            a[st]=i;
            C(st+1,i);
            mark[i]=0;
        }
    }
}
int main()
{

    scanf("%d %d %d",&n,&r,&k);
    C(0,1);
    C(0,1);
    return 0;
}
