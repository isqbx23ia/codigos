/*1.12.6. Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
massa inicial. em gramas,
 fazer um algoritmo que determine o tempo necessário para que essa massa se
tome menor do que 0.5 grama.
 Escreva a massa inicial, a massa final e o tempo calculado em horas, minutos
e segundos.

MASSA INICIAL=99.99 MASSA FINAL=99.99 TEMPO DECORRIDO=99:99:99


*/


#include <stdio.h>


int main() {

	float massaini,massa2,massaf;
    int horas,minutos,segundos,tempo;  
    
    tempo = 0;
    
	scanf("%f", &massaini);
	massa2 = massaini;

	while (massaini >= 0.5) {
	    massaini = massaini/2;
		tempo = tempo + 50.0;
		
		    }


        horas = tempo / 3600;
        minutos = (tempo%3600)/60;
        segundos = tempo%60;


    printf("MASSA INICIAL=%05.2f MASSA FINAL=%05.2f TEMPO DECORRIDO=%02d:%02d:%02d", massa2,massaini,horas,minutos,segundos);
    
	return 0;
}