#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);

  double A = (n * 0.25) + 7.5;
  double B = (n * 0.50) + 2.5;

  printf("Criterio A: %.2f\n", A);
  printf("Criterio B: %.2f\n", B);

  if(A < B)
    printf("Melhor escolha eh o criterio A\n");
  else
    printf("Melhor escolha eh o criterio B\n");

  return 0;
}