#include <stdio.h>

void desenhaQuadrado(int tipo, int lado) {
  if(tipo) {
    for(int i = 0; i < lado; i++) {
      for(int j = 0; j < lado; j++) {
        printf("*");
      }
      printf("\n");
    }
  } else {
    for(int i = 0; i < lado; i++) {
      printf("*");
      for(int j = 0; j < lado - 2; j++) {
        if(i == 0 || i == lado - 1)
          printf("*");
        else
          printf(" ");
      }
      printf("*");
      printf("\n");
    }
  }
}

int main() {

  int tipo, lado;
  scanf("%d%d", &tipo, &lado);
  desenhaQuadrado(tipo, lado);

  return 0;
}