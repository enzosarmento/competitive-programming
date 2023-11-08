#include <stdio.h>

int main() {

  int n, potencia = 0;
  scanf("%d", &n);

  for(int i = 0, j = 1; i < n; i++, j += 2) {
    potencia += j;
    printf("%d ", j);
  }
  printf("\n");
  printf("Potencia de %d ao quadrado: %d\n", n, potencia);

  return 0;
}