#include <stdio.h>

int main() {

    int fahr,cels;
    printf("Digite a temperatura atual\n");
    scanf("%d", &fahr);
    cels = (5 * (fahr-32) / 9 );
    printf("As temperaturas atuais são: Fahrenheit %d e Celsius %d", fahr,cels);






    return 0;
}