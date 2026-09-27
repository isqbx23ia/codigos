//24 - Faça um algoritmo que 
// calcule a quantidade de litros de combustível gastos em uma viagem,
//  sabendo que o carro faz 12km com um litro. 
// Deve-se fornecer ao usuário o tempo que será gasto na viagem 
// a sua velocidade média, distância percorrida 
// e a quantidade de litros utilizados para fazer a viagem.
//Fórmula: distância = tempo x velocidade.
//litros usados = distância / 12.



#include <stdio.h>

int main(){
    float tempviaj,distperc,qtdlitro,velomed;
    scanf("%f%f",&tempviaj,&velomed);
    distperc = tempviaj*velomed;
    qtdlitro = distperc/12;
    printf("Tempo viagem: %.2f horas\n", tempviaj);
    printf("Litros usados: %.2f\n", qtdlitro);
    printf("Velocidade média: %.2f\n", velomed);
    printf("Distância percorrida: %.2f\n", distperc);
    






    return 0;
}
