#include <stdio.h>
#include <math.h>

int main() {

  int n, n2, numero = 0, i = 10000;
  scanf("%d", &n);
  n2 = n;

  while(n > 0) {
    numero += (n % 10) * i;
    n /= 10;
    i /= 10;
  }

  if(numero == n2)
    printf("eh palindromo\n");
  else
    printf("nao eh palindromo\n");

  printf("Valor do numero: %d\n", numero);

  return 0;
}