//22 - Faça um algoritmo que leia dois valores inteiros A e B, imprima na tela o quociente e o resto da divisão inteira entre eles.

#include <stdio.h>

int main(){

int a,b,rest,quo;
scanf("%d%d", &a,&b);
quo = a/b;
rest = a%b;
printf("Quociente %d e resto %d\n ", quo,rest);


return 0;
}
