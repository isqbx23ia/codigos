//Exiba todos os números pares no intervalo de 1 a 50

#include <stdio.h>

int main(){

    int num;
    for(num = 1; num <= 50; num++)
     if (num % 2 == 0) {
        printf("%d\n", num);

     }




    return 0;
}
