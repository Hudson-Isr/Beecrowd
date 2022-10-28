#include <stdio.h>

int main(){
    double v;
    scanf("%lf",&v);
    if(v <= 400){
        double s,r;
        s = v * 1.15;
        r = s - v;
        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",r);
        printf("Em percentual: 15 %%\n");
    }
    else if(400 < v && v <= 800){
        double s,r;
        s = v * 1.12;
        r = s - v;
        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",r);
        printf("Em percentual: 12 %%\n");
    }
    else if(800 < v && v <= 1200){
        double s,r;
        s = v * 1.10;
        r = s - v;
        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",r);
        printf("Em percentual: 10 %%\n");
    }
    else if(1200 < v && v <=2000){
        double s,r;
        s = v * 1.07;
        r = s - v;
        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",r);
        printf("Em percentual: 7 %%\n");
    }
    else if(v > 2000){
        double s,r;
        s = v * 1.04;
        r = s - v;
        printf("Novo salario: %.2lf\n",s);
        printf("Reajuste ganho: %.2lf\n",r);
        printf("Em percentual: 4 %%\n");
    }
}