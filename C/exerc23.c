//23 - Faça um algoritmo que efetue o cálculo do salário líquido de um professor. 
// As informações fornecidas serão: valor da hora aula, 
// número de aulas lecionadas no mês 
// e percentual de desconto do INSS.
//  Imprima na tela o salário líquido final.

#include <stdio.h>


int main(){

    float calc1,valoraula,aulaleci,descinss,percinss,sl;
    scanf("%f%f%f", &valoraula,&aulaleci,&percinss);
    
    calc1 = valoraula*aulaleci;
    descinss = calc1 * percinss/100;
    sl = calc1 - descinss;
    printf("O sálario líquido do professor é: %.2f", sl);




    return 0;
}
