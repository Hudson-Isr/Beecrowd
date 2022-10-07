#include <stdio.h>

int main(){
    int x1,x2,y1,y2;
    double z1,z2,t;
    scanf("%d %d %lf",&x1,&y1,&z1);
    scanf("%d %d %lf",&x2,&y2,&z2);
    t = (y1 * z1) + (y2 * z2);
    printf("VALOR A PAGAR: R$ %.2lf\n",t);
}