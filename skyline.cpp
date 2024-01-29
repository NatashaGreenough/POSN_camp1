#include<bits/stdc++.h>
using namespace std;
int a[300];
int main(){
    int i,l,h,r,q,bef=0;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d %d",&l,&h,&r);
        for(i=l;i<r;i++){
            if(a[i]<h)
                a[i]=h;

            }
        }
        for(i=1;i<=300;i++){
                if(a[i]!=bef)
                {
                    printf("%d %d",i,a[i]);
                    bef = a[i];
                }
    }

    return 0;
}
