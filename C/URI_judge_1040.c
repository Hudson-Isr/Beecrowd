#include <stdio.h>

int main(){
    double n1,n2,n3,n4,m,ex,ne;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    m = (n1*2.0 + n2*3.0 + n3*4.0 + n4*1.0) / 10.0;
    printf("Media: %.1lf\n",m);

    if(m >= 5.0 && m <=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&ex);
        printf("Nota do exame: %.1lf\n",ex);
        ne = (m + ex) / 2;
        printf("Aluno aprovado.\n");
        printf("Media final: %.1lf\n",ne);
    }

    else if (m >= 7.0){
        printf("Aluno aprovado.\n");
    }

    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}