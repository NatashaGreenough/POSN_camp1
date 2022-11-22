#include <stdio.h>
int main(){
    int  k,g,q,c=0;
    scanf("%d",&q);
    while(q--){c=0;
        scanf("%d %d",&g,&k);
        while(g>100){
            g=g-((k-1)*100+10);
            c+=1;

        }printf("%d",c);
    }
    return 0;
}

