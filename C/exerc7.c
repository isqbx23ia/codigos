#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//7 - Faça um algoritmo que leia dois valores booleanos (lógicos) e determine se ambos são VERDADEIRO ou FALSO.

int main()
{
	char a,b;
	//a = true;
	//b = false;
	printf("Valores:\n");
	scanf("%s  %s", &a,&b);

	if (a == b && b == a) {
		printf("VERDADEIRO ");
	}
	else if (a != b && b != a) {
		printf("FALSO");
	}



	
	
	return 0;
}
