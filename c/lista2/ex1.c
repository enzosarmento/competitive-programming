#include <stdio.h>

int main() {

  int a, b;
  scanf("%d%d", &a, &b);

  printf("Soma: %d\n", a + b);
  printf("Diferenca: %d\n", a - b);
  printf("Produto: %d\n", a * b);
  printf("Quociente: %d\n", a / b);
  printf("Resto da divisao: %d\n", a % b);

  return 0;
}