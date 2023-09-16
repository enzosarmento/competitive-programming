#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);

  if(n >= 1000) {
    printf("Numero: %d\n", n);
    if(n % 11 == 0) {
      printf("Eh um numero capicua\n");
    } else {
      printf("Nao eh um numero capicua\n");
    }
  }

  return 0;
}