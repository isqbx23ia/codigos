//20 - Faça um algoritmo que receba um valor inteiro e imprima na tela a sua tabuada.

#include <stdio.h>

int main(){

    int num,mult,aux;
    scanf("%d", &num);
    for (mult = 0; mult < 11; mult++){
        aux=num*mult;
        printf("Tabuada do %d X %d = %d\n", num,mult,aux);


    }




    return 0;
}
