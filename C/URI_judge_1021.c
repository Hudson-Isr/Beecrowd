#include <stdio.h>

int main() {
    double n;
    int nota,moedas,cem,cin,cin1,cinm,vin,vin1,vincm,dez,dez1,dezm,cinc,cincm,cinc1,dois,dois1,um,um1,umm;
    scanf("%lf",&n);

    nota = n;
    n -= nota;
    moedas = n * 100;

    printf("NOTAS:\n");
    cem = nota / 100;
    printf("%d nota(s) de R$ 100.00\n",cem);
    cin = nota % 100;

    cin1 = cin / 50;
    printf("%d nota(s) de R$ 50.00\n",cin1);
    vin = cin % 50;

    vin1 = vin / 20;
    printf("%d nota(s) de R$ 20.00\n",vin1);
    dez = vin % 20;

    dez1 = dez / 10;
    printf("%d nota(s) de R$ 10.00\n",dez1);
    cinc = dez % 10;

    cinc1 = cinc / 5;
    printf("%d nota(s) de R$ 5.00\n",cinc1);
    dois = cinc % 5;

    dois1 = dois / 2;
    printf("%d nota(s) de R$ 2.00\n",dois1);
    um = dois % 2;

    printf("MOEDAS:\n");
    um1 = um / 1;
    printf("%d moeda(s) de R$ 1.00\n",um1);
    cinm = moedas/50;

    printf("%d moeda(s) de R$ 0.50\n",cinm);
    vincm = (moedas%50)/25;

    printf("%d moeda(s) de R$ 0.25\n",vincm);
    dezm = (((moedas%50)%25)/10);

    printf("%d moeda(s) de R$ 0.10\n",dezm);
    cincm = ((((moedas%50)%25)%10)/5);

    printf("%d moeda(s) de R$ 0.05\n",cincm);
    umm = ((((moedas%50)%25)%10)%5)/1;

    printf("%d moeda(s) de R$ 0.01\n",umm);
    
    return 0;
}