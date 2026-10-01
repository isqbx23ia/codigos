//Solicite um número inteiro positivo N 
// e calcule a soma de todos os números de 1 até N.


#include <stdio.h>

int main(){

    int num,aux;
    int soma;
    soma = 0;
    scanf("%d", &num);
    for(aux = 1; aux <= num; aux++){
		
		
		soma = soma + aux;
		
        printf("%d\n", soma);
	}
	
	
	
	

    return 0;
}
