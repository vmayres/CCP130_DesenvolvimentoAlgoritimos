  //gasolina é R$ 4,39 e, do álcool, R$ 3,19.
#include <stdio.h>

int main(void) {
  char type;
  float lit, valor, desconto;
  printf("Digite o tipo de combustivel (G para Gasolina ou A para Alcool):\n");
  scanf("%s", &type);
  if(type == 'G'){
    printf("Digite a quantidade de litros:\n");
    scanf("%f", &lit);
    if(lit <= 20){
      valor = lit*4.39;
      desconto = valor*0.04;
      valor = valor-desconto;
      printf("Valor com desconto de 4%: %.2f\n", valor);
    } 
    else{
      valor = lit*4.39;
      desconto = valor*0.06;
      valor = valor-desconto;
      printf("Valor com desconto de 6%: %.2f\n", valor);
    }
  }
  if(type == 'A'){
    printf("Digite a quantidade de litros:\n");
    scanf("%f", &lit);
    if(lit <= 20){
      valor = lit*4.39;
      desconto = valor*0.03;
      valor = valor-desconto;
      printf("Valor com desconto de 3%: %.2f\n", valor);
    } 
    else{
      valor = lit*4.39;
      desconto = valor*0.05;
      valor = valor-desconto;
      printf("Valor com desconto de 5%: %.2f\n", valor);
    }
  }
  
  return 0;
}