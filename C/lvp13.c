#include <stdio.h>
int main() {

    float pi,raio,vol;
    raio = 0.0;
    pi = 3.14;

    while (raio <= 20.0) {
    vol = (4.0/3.0) * pi * (raio*raio*raio);
    printf("RAIO=%.2f VOLUME=%.2f\n", raio,vol);
    raio = raio + 0.5;        
        
    }



    

    return 0;
}