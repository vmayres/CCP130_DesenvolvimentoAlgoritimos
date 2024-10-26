#include <stdio.h>

int main(void) {
  float salario, reajuste, novo, indice;
  printf("Digite o salário:\n");
  scanf("%f", &salario);

  if (salario <= 400){
    indice = 15;
  }
  else if (salario > 400 && salario <= 800){
    indice = 12;
  }
  else if (salario > 800 && salario <= 1200){
    indice = 10;
  }
  else if (salario > 1200 && salario <= 2000){
    indice = 7;
  }
  else if (salario > 2000){
    indice = 4;
  }

  reajuste = salario*(indice/100);
  novo = salario + reajuste;

  printf("Novo salario = %.2f\n", salario);
  printf("Valor do reajuste = %.2f\n", reajuste);
  printf("Indice do reajuste = %.0f\n", indice);
  return 0;
}