#include <stdio.h>
#include <stdlib.h>


int main() {
  float desc;
  int formapag, valorprod;
  formapag = 1;
  printf("Digite o valor do produto:\n");
  scanf("%d", &valorprod);
  printf("Opção:\n");
  scanf("%d",&formapag);

  if (formapag == 1) {
    desc = valorprod - (valorprod * 15.0 / 100.0);
    printf("Total da compra: %.2f\n", desc);
  } else if (formapag == 2) {
    desc = valorprod - (valorprod * 10.0 / 100.0);
    printf("Total da compra: %.2f\n", desc);
  } else if (formapag == 3) {
    printf("Total da compra: %.2d\n", valorprod);
  } else if (formapag == 4) {
    desc = valorprod + (valorprod * 10.0 / 100.0);
    printf("Total da compra: %.2f\n", desc);
  }
	else {
		printf("Opção Invalidá! Tente novamente!"); }
  return 0;

}


}