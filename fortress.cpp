#include <stdio.h>
int main()
{
    int x,y,ans,i,j;
    for(i=0;i<20;i++){
    scanf("%d %d",&x,&y);
    ans=x/2-(x/2-y)*2+1;
    if(ans>x/2+1||ans<0)
        printf("0\n");
    else
        printf("%d\n",ans);
    }

    return 0;
}
/*
40 15
30 12
60 40
50 18
66 26
36 11
36 16
36 18
56 20
56 22
44 18
32 14
42 20
36 16
38 14
38 16
34 20
36 16
44 14
34 14
*/
