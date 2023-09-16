#include <stdio.h>

int main() {

  int n1, n2;

  printf("Escolha um numero: ");
  scanf("%d", &n1);
  printf("Escolha mais um numero: ");
  scanf("%d", &n2);

  int n = 0;
  if(n1 <= n2) {
      for(int i = n1; i <= n2; i++) {
        n++;
      }
  } else {
    for(int i = n1; i >= n2; i--) {
      n++;
    }
  }

  printf("Indice: %d\n", n);

  printf("Resultado: %d\n", ((n1 + n2)*n) / 2);

  return 0;
}