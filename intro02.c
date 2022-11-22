#include<stdio.h>
int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    a=(int)a+32;
    b=(int)b-32;
    printf("%c %c",a,b);
}
