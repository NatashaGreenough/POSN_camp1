#include<bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main(){
    char x;
    int n,i,j,q,mx;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)scanf("%d",&a[i][j]);
    }
    for(i=n-1;i>=1;i--)
        for(j=1;j<=n;j++)
            a[i][j]+=max(a[i+1][j],a[i+1][j+1]);

    printf("%d",a[1][1]);

    return 0;
}
