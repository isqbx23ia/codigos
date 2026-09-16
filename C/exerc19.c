//19 - Faça um algoritmo que imprima na tela a tabuada de 1 até 10.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>


int main(){
	
	SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF8");

    int aux,cont,num,multi,soma;
    num = 1;
	cont = 0;
	multi = 0;
	    soma = num;
		aux = soma*cont;
		printf("\nSoma %d X %d é igual a %d", soma,cont,aux);
    while(multi <= 9) {
		
	
        soma = num;
		cont = cont + 1;
		aux = soma*cont;
	
        printf("\nSoma %d X %d é igual a %d", soma,cont,aux);
       
		multi++;
		}
		
		if(multi==10){
				
				cont = 0; 
				soma = num;
				soma++;
				}
			
				
				while(cont < 10){             //DESCARTAR A SOMA AQUI, PULA DE 2 PRA 3 E POR DIANTE!!
					
				aux = soma*cont;
				printf("\nSoma %d X %d é igual a %d", soma,cont,aux);
				cont++;
			}
			
			cont = 0;
			soma++;
			aux = soma*cont;
			printf("\nSoma %d X %d é igual a %d", soma,cont,aux);
			
		
		
	//	
	return 0;
		
}


  
	
		/*while(num <= 9){
			
	    num++;
	    
		cont = cont + 1;
		aux = num*cont;
		
        printf("\nSoma %d X %d é igual a %d", soma,cont,aux);
		
			
	}
       
        
   
	while(num <= 10) {
	   
        soma = num;
		cont = cont + 1;
		aux = soma*cont;
	
        printf("\nSoma %d X %d é igual a %d", soma,cont,aux);
       
		num++;
		}
	*/
