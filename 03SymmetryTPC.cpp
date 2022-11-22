#include<stdio.h>
int a[1010],b[1010];
int main(){
    int t,n,q,c,ans,i;
    scanf("%d",&q);
    while(q--){
        int ans=-1,c=0,maX=0;
        for(i=0;i<1010;i++){
            a[i]=0;
            b[i]=0;
        }
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            scanf("%d",&a[i]);
            if(a[i]==1)
                a[i]=0;
            else
                a[i]=1;
        }
        for(i=1;i<=n;i++){
        if(a[i]==1&&a[i-1]>=1){
        a[i]=a[i-1]+a[i];

        }

        }
        for(i=0;i<=n;i++){
            if(maX<a[i]&&a[i]%2==1&&a[i+1]==0){
                maX=a[i];
                ans=i;
            }
        }
        printf("%d\n",ans-(a[ans]+1)/2);
    }

    return 0;
}
