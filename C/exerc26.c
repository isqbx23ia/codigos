//Leia um número inteiro não negativo 
// e calcule seu fatorial.

#include <stdio.h>

int main(){

    int num,soma,aux;
    scanf("%d", &num);
    aux = num;
    soma = aux;
	while(aux > 1){
		aux--;
		
		soma = soma*aux;
		//printf("Fatorial: %d\n",soma);
		//use dentro caso queira ver o processo da multiplicação.
	}
	printf("Fatorial: %d\n",soma);




    return 0;
}
