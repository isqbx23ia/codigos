#include <stdio.h>

int main() {

    int lado1,lado2,lado3;
    scanf("%d%d%d", &lado1, &lado2, &lado3);
    
    if (lado1 == lado2 && lado2 == lado3) {
        printf("Triângulo equilátero  !");
    }
    if ((lado1 == lado2 && lado1 != lado3) || (lado1 == lado3 && lado1 != lado2) || (lado2 == lado3 && lado2 != lado1)) {
        printf("Triângulo isóceles  !");
    }
    if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3) {
        printf("Triângulo escaleno !");
    }
 





    return 0;
}
