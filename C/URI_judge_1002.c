#include <stdio.h>
#include <math.h>

int main(){
    double a,r,n;
    n = 3.14159;

    scanf("%lf",&r);
    a = (n * pow(r,2));
    printf("A=%.4lf\n",a);
}