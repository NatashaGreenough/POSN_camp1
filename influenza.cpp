#include<bits/stdc++.h>
using namespace std;
int a[100100],b[100100],mn[100100];
int main(){
    int n,i,j,q,ans=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
            scanf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(i=0;i<n;i++){
        mn[i]=min(a[i],b[i]);
    }
    for(i=0;i<n;i++){
        ans=max(ans,mn[i]);
    }

    printf("%d",ans);

    return 0;
}
