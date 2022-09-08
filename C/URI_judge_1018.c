#include <stdio.h>

int main(){
    int n,c;

    scanf("%d",&n);
    printf("%d\n",n);

    printf("%d nota(s) de R$ 100,00\n", n/100);
    c = (n%100);

    printf("%d nota(s) de R$ 50,00\n", c/50);
    c = (c%50); 

    printf("%d nota(s) de R$ 20,00\n", c/20);
    c = (c%20);

    printf("%d nota(s) de R$ 10,00\n", c/10);
    c = (c%10);

    printf("%d nota(s) de R$ 5,00\n", c/5);
    c = (c%5);
    
    printf("%d nota(s) de R$ 2,00\n", c/2);
    c = (c%2);

    printf("%d nota(s) de R$ 1,00\n", c/1);
}