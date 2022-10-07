#include <stdio.h>

int main(void){
    int x,y;
    double z,c;
    scanf("%d %d",&x,&y);
    c = 12;
    z = x * y / c;
    printf("%.3lf\n",z);
    
    return 0;
}