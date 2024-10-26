#include <stdio.h>
#include <math.h>

int main(void) {
  int linhas = 0, i = 0,a=0, b=0, c=0, d=0, e=0, f=0;
  int n = 1;
  printf("Digite um número:\n");
  scanf("%d", &linhas);
  for(i = 0; i < linhas; i++){
    a = n;
    b = n*n;
    c = (n*n)*n;
    printf("%d\t%d\t%d\n", a, b , c);
    d = n;
    e = (n*n)+1; 
    f = ((n*n)*n)+1;
    printf("%d\t%d\t%d\n", d, e, f);
    sleep(1);
    n = n + 1;
  }
  return 0;
}