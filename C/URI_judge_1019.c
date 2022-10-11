#include <stdio.h>

int main(){
    int N,h,m,s;
    scanf("%d",&N);
    h = N /3600;
    N -= h * 3600;
    m -= N / 60;
    N -= m * 60;
    s = N/1;
    printf("%d%d%d",h,m,s);
    return 0;
}