#include <stdio.h>
#include <stdlib.h>


int main()
{
	float nota1,nota2,nota3,nota4,media;
	printf("Valores:\n");
	scanf("%f%f%f%f", &nota1,&nota2,&nota3,&nota4);
    
	media = (nota1 + nota2 + nota3 + nota4) / 4;

	if (media >= 7) {
		printf("Aprovado! %2.f\n", media);
	}
	else if (media < 7) {
		printf("Reprovado!%2.f\n", media);
	}
	
	
	return 0;
}
  