#include <stdio.h>

int main(){
    int a,m,n,d,t,tm;
    scanf("%d",&n);
    a = n/365;
    n -= a * 365;
    m = n/30;
    n -= m * 30;
    d = n/1;
    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
}