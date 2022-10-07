#include <stdio.h>

int main(){
    double x,y,z,t;
    scanf("%lf%lf%lf",&x,&y,&z);
    t = (x*2 + y*3 + z*5) / 10;
    printf("MEDIA = %.1lf\n",t);
}