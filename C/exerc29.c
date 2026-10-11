//Continue solicitando ao usuário um número entre 1 e 10 até que ele forneça um valor nesse intervalo.


#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    while (num < 1 || num > 10) {
        printf("Fora da sequência!\n");
		printf("\nTente mais uma vez!\n");
		scanf("%d", &num);
    
    if (num >= 1 && num <= 10){
        printf("%d Número dentro da sequência!\n", num);
    }
}

    return 0;
}
