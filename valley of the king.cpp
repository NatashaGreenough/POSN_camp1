#include<bits/stdc++.h>
using namespace std;
int a[1010];
int main(){
    int i,j,n,q,cnt;
    scanf("%d",&q);
    while(q<=10&&q--){
        cnt=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]<=0) return 0;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i]!=2000000001&&a[j]!=2000000001&&i!=j&&a[i]==a[j]){cnt++;
                    a[i]=2000000001,a[j]=2000000001;
                }
            }
            }
        sort(a,a+n);
        printf("%d\n",cnt);
        if(n%2==0&&cnt==n/2)printf("Empty");
        else for(i=0;i<n-cnt*2;i++)
            printf("%d ",a[i]);
            printf("\n");
    }
    return 0;
}
