#include<bits/stdc++.h>
using namespace std;
int a[1000100];
int main(){
    int n,i,q;
    scanf("%d",&q);
    while(q--){
            scanf("%d",&n);
        for(i=1;i<=n;i++){
            a[i]=1<<30;
        }
        a[n]=0;
        for(i=n;i>=1;i--){
            a[i-1]=min(a[i-1],a[i]+1);
            if(i%2==0){
                a[i/2]=min(a[i/2],a[i]+1);
            }
            if(i%3==0){
                a[i/3]=min(a[i/3],a[i]+1);
            }
        }
        printf("%d",a[1]);
    }

    return 0;
}
