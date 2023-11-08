#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(NULL));
  int n, sPares = 1, sImpares = 0, temp;
  scanf("%d", &n);
  int v[n];

  for(int i = 0; i < n; i++) {
    v[i] = rand() % 100 + 1;
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n - 1; j++) {
      if(v[j] > v[j + 1]) {
        temp = v[j];
        v[j] = v[j + 1];
        v[j + 1] = temp;
      }
    }
  }

  printf("Lista de numeros: ");
  for(int i = 0; i < n; i++) {
    printf("%d ", v[i]);
    if(v[i] % 2 == 0)
      sPares *= v[i];
    else
      sImpares += v[i];
  }
  printf("\n");

  printf("Maior numero: %d\nMenor numero: %d\nProdutorio dos numeros pares: %d\nSomatorio dos numeros impares: %d\n", v[n - 1], v[0], sPares, sImpares);

  return 0;
}