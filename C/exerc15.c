#include <stdio.h>



int main() {

    int anos,ano,dias,soma,anoat;
    scanf("%d", &ano);
    anoat = 2026;
    anos = anoat - ano;
    soma = ano / 365; 
    dias = soma / 30;


    printf("Você tem %d anos %d meses e %d dias \n", anos,soma,dias);



    return 0;
}

