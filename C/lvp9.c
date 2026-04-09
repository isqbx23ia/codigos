#include <stdio.h>
int main(){


    float num;
    scanf("%f", &num);

    if (num > 0) {
        printf("NUM=%.2f POSITIVO", num);

    }
    if (num == 0) {
        printf("NUM=%.2f NULO", num);

    }

    if (num < 0) {
        printf("NUM=%.2f NEGATIVO", num);
    }



    return 0;
}