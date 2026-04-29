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

	float massaini, massaf, tempo,tempseg;
    
	tempseg = 50.0;

	scanf("%f", &massaini);
	printf("%f",massaini);
	while (massaini > 0.5) {
	    massaini = massaini/2;
		tempo = tempo + 50.0;
		massaf = massaini;
		    printf("MASSA INICIAL=%.2f\n MASSA FINAL=%.2f\n TEMPO DECORRIDO=%.2f:%.2f:%.2f\n", massaini,massaf,tempo);

	}
    
    
	return 0;





}