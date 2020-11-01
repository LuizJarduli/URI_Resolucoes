#include <stdio.h>

int main(){

    char nome[99];
    double salfixo, totalvendas, salfinal;
    salfinal = 0;
    scanf(" %c", &nome);
    scanf("%lf", &salfixo);
    scanf("%lf", &totalvendas);
    salfinal = salfixo + totalvendas * 0.15;
    printf("TOTAL = R$ %.2lf\n", salfinal);
    return 0;
}
