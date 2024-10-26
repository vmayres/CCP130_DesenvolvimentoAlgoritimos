#include <stdio.h>
#include <math.h>

int main(void) {
  int num = 0, primo = 0, prima = 0, primi = 0;
  printf("Digite um número inteiro:\n");
  scanf("%d", &num);
  primo = num / num;
  prima = num % 2;
  primi = num % 3;
  if((primo == 1 && prima != 0 && primi != 0) || num == 2){
    printf("O número %.0d é primo.\n", num);
  }
  else{
    printf("O número %.0d não é primo.\n", num);
  }

  return 0;
}