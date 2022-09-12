#include <stdio.h>
#include <math.h>

int main(){
    double A,B,C,x1,x2,r1,r2,delta;
    scanf("%lf %lf %lf",&A,&B,&C);

    delta = pow(B,2) - (4*A*C);
    x1 = -B + sqrt(delta);
    r1 = x1/(2*A);
    x2 = -B - sqrt(delta);
    r2 = x2/(2*A);

    if (delta < 0){
        printf("Impossivel calcular\n");
    }
    else if (x1 == 0 || x2 == 0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\n",r1);
        printf("R2 = %.5lf\n",r2);
    }
}