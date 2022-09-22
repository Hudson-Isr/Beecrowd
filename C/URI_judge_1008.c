#include <stdio.h>

int main() {
    int f,h;
    double s,SALARY;
    scanf("%d%d%lf",&f,&h,&s);
    printf("NUMBER = %d\n",f);
    SALARY = h * s;
    printf("SALARY = U$ %.2lf\n",SALARY);
}