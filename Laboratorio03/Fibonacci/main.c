#include <stdio.h>

int main(void) {
  int input =0 , n1 =1, n2 =0, n3 =1, i =0;
  printf("Digite um número:\n");
  scanf("%d", &input);
  printf("0");
  for(i =1; i < input; i++){
    printf(" %d",n1);
    n1 = n2 + n3;
    n2 = n3;
    n3 = n1;
  } 
  
  return 0;
}