#include <stdio.h>
#include <math.h>

int main(){
    double x1,y1,x2,y2,r;
    scanf("%lf""%lf",&x1,&y1);
    scanf("%lf""%lf",&x2,&y2);

    r = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("%.4lf",r);
}