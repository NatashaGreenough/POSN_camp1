#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>79 && x<=100) printf("A");
    else if(x>74) printf("B+");
    else if(x>69) printf("B");
    else if(x>64) printf("C+");
    else if(x>59) printf("C");
    else if(x>54) printf("D+");
    else if(x>49) printf("D");
    else printf("F");
        return 0;
}
