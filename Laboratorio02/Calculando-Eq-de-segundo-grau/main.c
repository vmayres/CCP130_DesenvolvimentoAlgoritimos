#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c, delta, r1, r2;
  printf("Digite os valores de 'a', 'b' e 'c' respectivamente separados por um espaco:\n");
  scanf("%f %f %f", &a, &b, &c);

  delta = b*b - 4*a*c;
  
  if (a == 0){
    printf("A equacao nao e de Segundo grau, porque 'a=0'");
  }

  else if (delta == 0){
    printf("Delta igual a 0 (%.2f), existe apenas uma raiz real: %.4f.", delta, -b/(2*a));
  }

  else if (delta<0){
    printf("Delta negativo (%.2f), portanto nao existem raizes reais.", delta);
  }

  else if (delta>0){
    r1 = (-b -sqrt (delta))/(2*a);
    r2 = (-b +sqrt (delta))/(2*a);
      
    printf("Delta positivo (%.2f), existem duas raizes reais: %.4f e %.4f.", delta, r2, r1);
  }
  
  return 0;
}