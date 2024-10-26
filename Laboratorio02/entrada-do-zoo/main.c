//Os visitantes com 2 anos de idade ou menos têm entrada gratuita. Crianças entre 3 e 12 anos pagam R$ 14,00. Idosos com 65 anos ou mais pagam R$ 18,00. A entrada para todos os outros visitantes custa R$ 23,00. 

#include <stdio.h>

int main(void) {
  float j = 0, soma = 0, num = 0; //num = idade
  while(1){
    printf("Digite a idade do visitante:\n");
    scanf("%f", &num);
    if(num <= 2){
      soma+=0;
    }
    else if(num >= 3 && num <= 12){
      soma+=14;
    }
    else if(num >= 65){
      soma+=18;
    }
    else {
      soma+=23;
    }
    if(num != 0){
      j++;
    }
    if(num == 0){
      break;
    }
  }
  printf("O Valor do grupo é %.2f", soma);
  return 0;
}