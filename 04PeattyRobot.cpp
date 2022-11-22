#include<stdio.h>
#include<string.h>
char a[50];
int main(){
    int x=0,y=0,i,j;
    scanf("%s",a);
    j=strlen(a);
    for(i=0;i<j;i++){
        if(a[i]=='N') y+=1;
        else if(a[i]=='S') y-=1;
        else if(a[i]=='E') x+=1;
        else if(a[i]=='W') x-=1;
        else if(a[i]=='Z') {y=0;x=0;}
    }printf("%d %d",x,y);

    return 0;
}
