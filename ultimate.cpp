#include<bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main(){
    char x;
    int n,i,j,q,m,ma=-1;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf(" %c",&x);
            if(x=='#')a[i][j]=0;
            else a[i][j]=min(a[i-1][j-1],min(a[i-1][j],a[i][j-1]))+1;
            ma=max(ma,a[i][j]);
        }
    }
    printf("%d",ma);

    return 0;
}
