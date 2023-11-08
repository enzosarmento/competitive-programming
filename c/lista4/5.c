#include <stdio.h>
#include <math.h>

int inverteNumero(int n) {
  int potencia = log10(n);
  int i = pow(10, potencia);
  int numero = 0;
  while(n > 0) {
    numero += (n % 10) * i;
    n /= 10;
    i /= 10;
  }

  return numero;
}

int main() {

  int n;
  scanf("%d", &n);

  printf("%d\n", inverteNumero(n));
  
  return 0;
}