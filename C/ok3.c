#include <stdio.h>
#include <stdlib.h>

/*
 12 - Faça um algoritmo que leia o valor de um produto
 e determine o valor que deve ser pago,
  conforme a escolha da forma de pagamento
 pelo comprador
 e imprima na tela o valor final do produto a ser pago.
  Utilize os códigos da tabela de condições de pagamento para efetuar o cálculo
 adequado. Tabela de Código de Condições de Pagamento



 1 - À Vista em Dinheiro ou Pix, recebe 15% de desconto

 2 - À Vista no cartão de crédito, recebe 10% de desconto

 3 - Parcelado no cartão em duas vezes, preço normal do produto sem juros

 4 - Parcelado no cartão em três vezes ou mais, preço normal do produto mais
 juros de 10%

*/

int main() {
  float desc, valor, formapag, pix, dinheiro, vistacred, cartcred, cartcred1;
  cartcred1 = 2.0 || 3.0;
  printf("Valores:\n");
  scanf("%f%f", &valor, &formapag, &cartcred1);

  if (formapag == pix || formapag == dinheiro)
    desc = (valor * 1 - 15 / 100);
  printf("Total da compra: %f\n", desc);
  if (formapag == vistacred)
    desc = (valor * 1 - 10 / 100);
  printf("Total da compra: %f\n", desc);
  if (formapag == cartcred)
    printf("Total da compra: %f\n", valor);
  else if (formapag == cartcred1)
    desc = (valor * 10 / 100);
  printf("Total da compra: %f\n", desc);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
 12 - Faça um algoritmo que leia o valor de um produto
 e determine o valor que deve ser pago,
  conforme a escolha da forma de pagamento
 pelo comprador
 e imprima na tela o valor final do produto a ser pago.
  Utilize os códigos da tabela de condições de pagamento para efetuar o cálculo
 adequado. Tabela de Código de Condições de Pagamento



 1 - À Vista em Dinheiro ou Pix, recebe 15% de desconto

 2 - À Vista no cartão de crédito, recebe 10% de desconto

 3 - Parcelado no cartão em duas vezes, preço normal do produto sem juros

 4 - Parcelado no cartão em três vezes ou mais, preço normal do produto mais
 juros de 10%

*/

int void() {
  float desc, valor, formapag, pix, dinheiro, vistacred, cartcred, cartcred1;
  cartcred1 = 2.0 || 3.0;
  printf("Valores:\n");
  scanf("%f%f%f", &valor, &formapag, &cartcred1);

  if (formapag == pix || formapag == dinheiro)
    desc = (valor * 1 - 15 / 100);
  printf("Total da compra: %f\n", desc);
  else if (formapag == vistacred) desc = (valor * 1 - 10 / 100);
  printf("Total da compra: %f\n", desc);
  else if (formapag == cartcred) printf("Total da compra: %f\n", valor);
  else if (formapag == cartcred1) desc = (valor * 10 / 100);
  printf("Total da compra: %f\n", desc);

  return 0;
}

#include <stdio.h>
#include <stdlib.h>

/*
 12 - Faça um algoritmo que leia o valor de um produto
 e determine o valor que deve ser pago,
  conforme a escolha da forma de pagamento
 pelo comprador
 e imprima na tela o valor final do produto a ser pago.
  Utilize os códigos da tabela de condições de pagamento para efetuar o cálculo
 adequado. Tabela de Código de Condições de Pagamento



 1 - À Vista em Dinheiro ou Pix, recebe 15% de desconto

 2 - À Vista no cartão de crédito, recebe 10% de desconto

 3 - Parcelado no cartão em duas vezes, preço normal do produto sem juros

 4 - Parcelado no cartão em três vezes ou mais, preço normal do produto mais
 juros de 10%

*/

int main() {
  float desc, valor, pix, dinheiro, vistacred, cartcred, cartcred1;
  cartcred1 = 2.0 || 3.0;
  int formapag;
  printf("Valores:\n");
  scanf("%f %d %f", &valor, &formapag, &cartcred1);

  if (formapag == pix || formapag == dinheiro) {
    desc = (valor * 1 - 15 / 100);
    printf("Total da compra: %2.f\n", desc);
  } else if (formapag == vistacred) {
    desc = (valor * 1 - 10 / 100);
    printf("Total da compra: %2.f\n", desc);
  } else if (formapag == cartcred) {
    printf("Total da compra: %2.f\n", valor);
  } else if (formapag == cartcred1) {
    desc = (valor * 10 / 100);
    printf("Total da compra: %2.f\n", desc);
  }

  return 0;
}
