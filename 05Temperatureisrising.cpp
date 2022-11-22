#include<stdio.h>
char a[200][200],mx,m,di[4]={1,-1,0,0},dj[4]={0,0,1,-1};
void tem(int i ,int j){
    if(i<0||i>=m||j<0||j>=m)return;
    if(a[i][j]==100)return;
    if(mx<a[i][j])mx=a[i][j];
    int k;
    for(k=0;k<4;k++){
        if(a[i+di[k]][j+dj[k]]<=a[i][j])continue;
        tem(di[k]+i,dj[k]+j);
    }
}


int main(){
    int i,j,y,x;
    scanf("%d %d %d",&m,&y,&x);
    for(i=0;i<m;i++)
        for(j=0;j<m;j++)scanf("%d",&a[i][j]);
    tem(x-1,y-1);
    printf("%d",mx);

    return 0;
}
/*
4
2 1
100 1 3 8
0 2 1 4
2 3 5 100
0 8 8 100
*/

/*
1
1 1
9
*/

/*
5
4 2
0 1 100 100 0
100 2 3 1 1
100 100 4 5 100
8 7 100 6 100
7 100 100 100 9
*/
