#include<bits/stdc++.h>
using namespace std;

int main(){
    int  en,st=1,n,a[1000],mx=0,sum=0,i,j,ansst=1,ansen,num,Max=-100000000;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        sum+=num;
        if(sum>Max)
            Max=sum,ansst=st,ansen=i;
        if(sum<0)
            sum=0,st=i+1;
    }

    printf("%d %d\n%d\n",ansst,ansen,Max);

    return 0;
}
/*
5
4
-6
3
-2
6
*/
