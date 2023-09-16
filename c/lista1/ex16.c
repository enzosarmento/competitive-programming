#include <stdio.h>

int main() {

  int a, b, c = 0;
  scanf("%d%d", &a, &b);

  while(a >= b) {
    a -= b;
    c++;
  }

  printf("Valor de A: %d\nValor de C: %d\n", a, c);

  return 0;
}