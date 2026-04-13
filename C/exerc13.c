#include <stdio.h>


int main() {

    char nome[50];
    int idade;
    scanf("%s %d", nome,&idade);

    if (idade > 18) {
        printf("Você,%s, é maior de idade! %d anos\n",nome,idade);

    }
    else if (idade < 18){
        printf("Você, %s, é menor de idade!  %d anos\n", nome, idade);
    }

    return 0;
}
 
