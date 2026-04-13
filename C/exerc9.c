#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	 float imc,peso,altura;
	printf("Valor:\n");
	scanf("%f %f", &peso, &altura);
    
	imc = peso / (altura * altura);
	
	if (imc < 18.5)
		printf("Abaixo do peso %2.f\n", imc);
	else if (imc >= 18.6 && imc <= 24.9)
		printf("Peso ideal! Parabéns! %2.f\n", imc);
	else if (imc >= 25.0 && imc <= 29.9)
		printf("Levemente acimda do peso %2.f\n", imc);
	else if (imc >= 30.0 && imc <= 34.9)
		printf("Obesidade graU I %f\n", imc);
	else if (imc >= 35.0 && imc <= 39.9)
		printf("Obseidade grau II (Severa) %2.f\n", imc);
	else if (imc >= 40)
		printf("Obesidade grau III (Mórbida) %2.f\n", imc);	
	
	
	
	return 0;
}