#include <stdio.h>
int main(){

int num,soma, aux; 
scanf("%d", &num);
aux = 0;
soma = 1;
while (aux <= num){
aux++;
soma = aux + soma;
printf("%d", soma);


return 0;
}