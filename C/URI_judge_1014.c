#include <stdio.h>

int main(void){
    int x;
    double y,v;
    scanf("%d %lf",&x,&y);
    v = x / y;
    printf("%.3lf km/l\n",v);
    
    return 0;
}