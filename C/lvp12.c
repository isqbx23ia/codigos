/*Quando não for possível calcular a área do triângulo (não há triângulo formado), imprima a área com o valor 0.00 (zero).


NESTE LVP: NÃO FAÇA ENTRADA DE DADOS INTERATIVA

Os itens a seguir devem fazer parte da solução apresentada e serão avaliados:

- Não faça entrada de dados interativa.

- Não utilize comandos e funções (estruturas de controle de fluxo) ou tipos de dados (estruturas de dados) não apresentados em aula.

- Declare todas as variáveis que utilizar em seus programas com letras em minúsculo e no início de seu programa.

- Resolva o problema dentro da função main() e invoque a mesma usando o teste condicional com a variável __name__





1.12.44. Fazer um algoritmo que, tendo em uma unidade de entrada os parâmetros A e B de uma reta
no plano dado pela equação Y = AX + B, determine a área do triângulo formado por esta reta e os eixos
coordenados.
O algoritmo lerá um número indeterminado de linhas, cada linha contendo um par de parâmetros
(A, B). e para cada par lido deverá escrever: os parâmetros A e B e a área do triângulo.
A execução do algoritmo deverá terminar quando ler uma linha com um par de zeros.
Observação: Se, em uma linha (à exceção da última), um dos parâmetros for igual a zero, não haverá
triângulo - assim, o programa deverá imprimir A, B, e O(zero).




Modelo de saída de dados:
A=9.99 B=9.99 Area=9.99



*/


#include <stdio.h>
#include <math.h>


int main() {

    float a,b,area;

    scanf("%f%f", &a,&b);
    
    
    while (a!= 0 || b!= 0) {


        if (a == 0 || b == 0) {
            area = 0.0;
        }
        
        else {
           area = fabs((b*b) / (2*a));
        }
    
    printf("A=%.2f\n B=%.2f\n Area=%.2f\n", a,b,area);

    scanf("%f%f", &a,&b);
    }

    return 0;
}