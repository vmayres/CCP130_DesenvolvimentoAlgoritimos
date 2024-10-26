#include <stdio.h>

int main(void) {
  int soma = 0, num =0 , j = 0, med = 0;
  
  while(1){
    printf("Digite um número:\n");
    scanf("%d", &num);
    soma = num + soma;
    if(num != 0){
      j++;
    }
    if(num == 0){
      break;
    }
  }
  printf("Você digitou %.0d números\n", j);
  printf("O somatório dos números é %.0d\n", soma);
  med = soma / j;
  printf("Média = %.0d\n", med);
  
  return 0;
}