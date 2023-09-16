#include <stdio.h>

int main() {

  int vetor[3];

  for(int i = 0; i < 3; i++)
    scanf("%d", &vetor[i]);

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3 - i - 1; j++) {
      if(vetor[j] > vetor[j + 1]) {
        int temporario = vetor[j + 1];
        vetor[j + 1] = vetor[j];
        vetor[j] = temporario;
      }
    }
  }

  for(int i = 0; i < 3; i++)
    printf("%d ", vetor[i]);

  printf("\n");

  return 0;
}