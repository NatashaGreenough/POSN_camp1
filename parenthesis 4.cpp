#include<bits/stdc++.h>
using namespace std;
char a[2000],ans[100100][50];
int n,cnt;
void play(int open,int close,int state){
    if(open>n||close>n)return;
    if(open<close)return;
    if(state>2*n)return;
    if(open==n&&close==n){
        strcpy(ans[cnt++],a);
        return;
    }
    a[state]='(';
    play(open+1,close,state+1);
    a[state]=')';
    play(open,close+1,state+1);
}

int main(){
    scanf("%d",&n);
    play(0,0,0);
    printf("%d\n",cnt);
    for(int i=0;i<cnt;i++){
        printf("%s\n",ans[i]);
    }
    return 0;
}
