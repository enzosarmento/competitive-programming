#include <stdio.h>

int main() {

  int n, contador = 0;
  scanf("%d", &n);

  while(n > 0) {
    if(n % 10 == 7)
      contador++;
    n /= 10;
  }

  printf("%d\n", contador);

  return 0;
}