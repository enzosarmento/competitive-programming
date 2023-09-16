#include <stdio.h>

int main() {

  int n, total = 0, i = 0;
  scanf("%d", &n);

  while(i <= n) {
    if(i % 2 != 0) {
      total += i;
    }
    printf("Valor de i: %d\nValor de total: %d\n", i, total);
    i++;
  }

  printf("Soma: %d\n", total);

  return 0;
}