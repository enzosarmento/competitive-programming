#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int n, a;

    a = rand() % 100;
    printf("Digite um palpite: ");
    scanf("%d", &n);
    if(n == a)
      printf("Excelente! Voce adivinhou o numero!\n");
    else {
      while(n != a) {
        if(n < a)
          printf("Muito baixo. Tente novamente.\n");
        else
          printf("Muito alto. Tente novamente.\n");
        printf("Digite outro palpite: ");
        scanf("%d", &n);
      }
      printf("Excelente! Voce adivinhou o numero!\n");
    }


  return 0;
}