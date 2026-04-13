#include <stdio.h>
#include <stdlib.h>


int main()
{
	float nota1,nota2,nota3,media;
	printf("Valores:\n");
	scanf("%f%f%f", &nota1, &nota2, &nota3);
    
	media = (nota1 + nota2 + nota3) / 3;

	printf("Média das notas: %4.f\n", media);
	
	
	
	return 0;
}