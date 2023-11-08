#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(NULL));
  int n, a, b, produto;

  do {
    a = rand() % 10;
    b = rand() % 10;
    produto = a * b;
    printf("Quanto eh %d vezes %d? ", a, b);
    scanf("%d", &n);
    if(n != -1) {
      if(n == produto)
        printf("Muito Bem!!!\n");
      else {
        printf("Nao. Tente novamente.\n");
        while(n != produto) {
          printf("Quanto eh %d vezes %d? ", a, b);
          scanf("%d", &n);
        }
        printf("Muito Bem!!!\n");
      }
    }
  } while(n != -1);


  return 0;
}