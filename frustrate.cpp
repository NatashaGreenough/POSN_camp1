#include<bits/stdc++.h>
using namespace std;
int a[100100];
int main(){
    int i,x,n,num,q,c,b,sum[100100];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        a[i]=a[i-1]+num;
    }

    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&c,&b);
        x=a[b]-a[c-1];
        printf("%d",x);
    }

    return 0;
}
