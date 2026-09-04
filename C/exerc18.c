//18 - Francisco tem 1,50m e cresce 2 centímetros por ano, enquanto Sara tem 1,10m e cresce 3 centímetros por ano.
//  Faça um algoritmo que calcule
//  e imprima na tela em quantos anos serão necessários para que Francisco seja maior que Sara.


#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>


int main(){
	
	SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");
	
    float altfran,altsara,diferen;
    int ano;
    ano = 0;
    altfran = 1.50;
    altsara = 1.10;
    
    diferen = altfran - altsara;
    
    printf("\ndiferença %.2f\n", diferen);
    
    while(altsara <= altfran){
       
        altfran = altfran + 0.02;
        printf("\n%.2f Altura Francisco", altfran);
        altsara = altsara + 0.03;
        printf("\n%.2f Altura Sara", altsara);
        ano = ano + 1;
    }
    
    printf("\n%.2f Altura Francisco\n%.2f Altura Sara", altfran,altsara);
    printf("\nSão necessários %d anos para Sara ser maior que Francisco", ano);

	
    return 0;
}
