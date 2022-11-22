#include<bits/stdc++.h>
using namespace std;
int a[1001000];
int main(){
    int n,i,mx=-1,q;
    scanf("%d",&q);
    for(i=1;i<=q;i++){
        scanf("%d",&a[i]);
    }
    for(i=q;i>=1;i--){
        mx=max(a[i],mx);
        if(a[i]<=mx)a[i]=mx-a[i];
    }
    mx=-1;
    for(i=1;i<=q;i++)
        mx=max(a[i],mx);
    printf("%d",mx);
    return 0;
}
