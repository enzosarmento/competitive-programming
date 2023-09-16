#include <stdio.h>
#include <math.h>

int main() {

  double p, h;
  scanf("%lf%lf", &p, &h);

  double imc = p / pow(h, 2);

  if(imc < 18.5)
    printf("Voce esta abaixo do peso ideal\n");
  else if(imc >= 18.5 && imc <= 24.9)
    printf("Parabens - voce esta em seu peso normal!\n");
  else if(imc >= 25.0 && imc <= 29.9)
    printf("Voce esta com sobrepeso\n");
  else
    printf("Voce esta obeso\n");

  printf("IMC = %.1f\n", imc);

  return 0;
}