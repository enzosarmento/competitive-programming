#include <stdio.h>

int main() {

  double salario;
  scanf("%lf", &salario);

  if(salario <= 1000.0) {
    printf("O funcionario contribuiu com R$ %.2f\n", (salario * 2) / 100);
  } else if(salario > 1000.0) {
    double contri = (salario * 2) / 100;
    if(contri <= 60.0)
      printf("O funcionario contribuiu com R$ %.2f\n", contri);
    else
      printf("O funcionario contribuiu com R$ %.2f\n", 60.00);
  }

  return 0;
}