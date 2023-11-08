#include <stdio.h>

int potenciaInt(int base, int expoente) {
  int potencia = 1;
  for(int i = 0; i < expoente; i++)
    potencia *= base;
  return potencia;
}

int main() {

  int base, expoente, potencia;
  scanf("%d%d", &base, &expoente);

  potencia = potenciaInt(base, expoente);
  printf("Valor da potencia de %d elevado a %d: %d\n", base, expoente, potencia);

  return 0;
}