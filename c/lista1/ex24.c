#include <stdio.h>

void imprimeDigito(int n) {
  int position = 0; 

  while(position < 3) {
    int digito = n % 10;

    printf("Digito na posicao %d: %d\n", position, digito);

    n /= 10;
    position++;
  }
}

int main() {

  int n;
  scanf("%d", &n);

  imprimeDigito(n);

  return 0;
}