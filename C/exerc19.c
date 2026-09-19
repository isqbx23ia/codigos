//19 - Faça um algoritmo que imprima na tela a tabuada de 1 até 10.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>


int main(){
	
	SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int aux,num,mult;
	for(num = 1; num < 11; num++){
		for(mult = 0; mult < 11; mult++){
			aux = num*mult;
			printf("Tabuada: %d X %d = %d\n", num,mult,aux);
		}
		

	}


	return 0;



}
