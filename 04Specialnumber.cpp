#include<stdio.h>
#include<string.h>
#include<math.h>
char a[10];
int main(){
    int i,len,num,k,q=5;
    while(q--){
    k=0;
    scanf("%s",a);
    sscanf(a,"%d",&num);
    len=strlen(a);
    for(i=1;i<=len;i++){
        k+=pow(a[i-1]-'0',i);
    }
    if(k==num)printf("Y");
    else printf("N");

    }
    return 0;
}
