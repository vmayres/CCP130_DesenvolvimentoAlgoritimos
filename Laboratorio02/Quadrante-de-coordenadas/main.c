#include <stdio.h>

int main(void) {
  float x, y;
  printf("Digite x e y:\n");
  scanf("%f", &x);
  scanf("%f", &y);
  if(x == 0 && y == 0){
    //origem
    printf("Esta na origem\n");
  }
  else if(x > 0){
    if(y > 0){
      //q1
      printf("Q1\n");
    }
    else{
      //q2
      printf("Q4\n");
    }
  }
  else{
    if(y < 0){
      //q3
      printf("Q3\n");
    }
    else{
      //q4
      printf("Q2\n");
    }
  }
  
  return 0;
}