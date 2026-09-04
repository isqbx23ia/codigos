

#include <stdio.h>


int main() {
	
/*	
	float numero = 3.1415;
	printf("Valor da minha variável: %.4f\n", numero);
	printf("Digte um número real: ");
	scanf("%f", &numero);
	
	printf("Valor da variável: %.3f", numero);
	--------------------------------------------------------------
	
	//int valor, valor2; 
	//valor = 12;
	//printf("Digite um valor inteiro: ");
	//scanf("%d", &valor);
	//printf("Digite um segundo valor inteiro: ");
	//scanf("%d", &valor2);
	
	//printf("\n\nPrimeiro Valor: %d\n\Segundo Valor: %d\n\n", valor, valor2);
	----------------------------------------------------------------

	char nome = 'F';
	printf("Sexo: %c\n", nome);
	printf("Sexo: (f, F, m, M): ");
	scanf("%c", &nome);
	
	printf("SEXO: %c\n", nome);

	--------------------------------------------------------------------
	char letra;
	printf("Digite uma letra:  ");
	letra = getchar();
	printf("Caracter lido: %c\n", letra); 
	-------------------------------------------------------------------
	
	char letra;
	printf("Digite uma letra: ");
	letra = getc(stdin);
	
	printf("Caracter lido: %c\n", letra);
	
	------------------------------------------------------------------

	char letra;
	printf("Digite um caracter:  ");
	letra = fgetc(stdin);
	printf("Caracter lido: %c\n", letra);

	------------------------------------------------------------------
	int num1, num2, num3;
	printf("Digite um número: ");
	scanf("%d%d%d", &num1, &num2, &num3);

	printf("Valores lidos: %d, %d e %d\n", num1, num2, num3);
	------------------------------------------------------------------

	char sexo;
	int idade;
	float altura, peso;
	
	printf("Digite altura, idade, peso e sexo (M, m, F, f),:\n");
	scanf("%f", &altura);
	scanf("%d", &idade);
	scanf("%f", &peso);
	scanf(" %c", &sexo);
	
	printf("\nAltura: %.2f\nIdade: %d\nPeso: %.1f\nSexo: %c\n", altura, idade, peso, sexo);	

		
	char a, b; 
	printf("Digite uma letra:\n ");
	
	scanf("%c", &a);
	
	scanf("%c");
	printf("Digite uma letra:\n ");
	scanf("%c", &b);
	
	printf("Letra 1: %c\nLetra 2: %c\n", a,b);
	

	
	short int x = 32767;
	
	printf("Valor de x: %d\n",  x);
	x++;
	printf("TAMANHO EM MEMÓRIA DE UM TIPO INTEIRO: %hi bytes\n",  x);
		//32 bits
	return 0;


	
	
	long long int x = 2147483647;
	printf("Tamanho int em bytes: %lli\n", sizeof x);
	
	printf("Valor do número int: %lld\n", x);
	x++;
	printf("Valor do número int: %d\n", x);
	
*/	
	int soma, soma1, soma2, soma3;
	int x;
	int y;
	printf("\nDigite um número: ");
	scanf("%d", &x);
	printf("Digite outro número: ");
	scanf(" %d", &y);
	soma = (x + y);
	soma1 = (x - y);
	soma2 = (x * y);
	soma3 = (x / y);
	printf("o resultado é: %d\n", soma);
	printf("o resultado é: %d\n", soma1);
	printf("o resultado é: %d\n", soma2);
	printf("o resultado é: %d\n", soma3);
	
	
	return 0;


}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	/*unsigned int x = 2147483647;
	printf("\n\t %u \n", ++x);

	unsigned short int y = 55000;
	printf("\n %hu", y);
	
	long int z = 47000;
	printf("\n %lu", ++z);
	
	setlocale(LC_ALL,"Portuguese");
	*/
	
	
	
	printf("%s\n", setlocale(LC_ALL, NULL));
	printf("Abóbora");
	
	
	return 0;
}



