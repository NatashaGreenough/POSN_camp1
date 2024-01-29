#include<bits/stdc++.h>
using namespace std;
int a[510][510];
int main(){
    int n,m,i,j,ans=1<<30;
    scanf("%d %d",&n,&m);
    for(i=0;i<=n+1;i++){
        for(j=0;j<=m+1;j++)
            a[i][j]=1<<30;
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=n-1;i>=1;i--)
        for(j=1;j<=m;j++)
            a[i][j]=min(a[i+1][j-1],min(a[i+1][j],a[i+1][j+1]))+a[i][j];

    for(j=1;j<=m;j++)
        ans=min(ans,a[1][j]);

    printf("%d",ans);

    return 0;
}
/*
5 6
3 6 1 7 2 3
4 7 9 5 2 1
3 3 3 9 9 8
7 5 7 5 8 9
2 4 1 3 7 1
*/
