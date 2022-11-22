#include<stdio.h>
#include<string.h>
#include<math.h>
char a[110];
int main(){
    int i,q,c;
    scanf("%d",&q);
    while(q--){
            c=0;
    scanf("%s",a);
    for(i=0;i<strlen(a);i++){
        if(a[i]=='M'){
            if(a[i-1]=='C'&&i!=0)c+=800;
            else c+=1000;
        }
        else if(a[i]=='D'){
            if(a[i-1]=='C'&&i!=0)c+=300;
            else c+=500;
        }
        else if(a[i]=='C'){
            if(a[i-1]=='X'&&i!=0)c+=80;
            else c+=100;
        }
        else if(a[i]=='L'){
            if(a[i-1]=='X'&&i!=0)c+=30;
            else c+=50;
        }
        else if(a[i]=='X'){
            if(a[i-1]=='I'&&i!=0)c+=8;
            else c+=10;
        }
        else if(a[i]=='V'){
            if(a[i-1]=='I'&&i!=0)c+=3;
            else c+=5;
        }
        else if(a[i]=='I')c+=1;

    }printf("%d",c);
    }
    return 0;
}
/*
3
DCCXXVI
XLIX
MMCDLXXXIX
*/
