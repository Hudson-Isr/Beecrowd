#include <stdio.h>

int main(void) {
    double A,B,C,tg,tr,q,t,r,pi;
    pi = 3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    tg = A * C / 2;
    t = (C * C) * pi;
    tr = C * (A + B) /2;
    q = B * B;
    r = A * B;
    printf("TRIANGULO: %.3lf\n",tg);
    printf("CIRCULO: %.3lf\n",t);
    printf("TRAPEZIO: %.3lf\n",tr);
    printf("QUADRADO: %.3lf\n",q);
    printf("RETANGULO: %.3lf\n",r);
    
    return 0;
}