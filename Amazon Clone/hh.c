#include<stdio.h>
int main()
{
    int a=10,b=2,c;
    a=!(c=c==c) && (++b);
    printf("%d %d %d",b,c,a);
    return 0;
}