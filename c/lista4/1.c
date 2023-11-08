#include <stdio.h>
#include <math.h>

float hipotenusa(float cateto1, float cateto2) {
  return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}


int main() {

  float cateto1, cateto2, valorHipotenusa;
  scanf("%f%f", &cateto1, &cateto2);

  valorHipotenusa = hipotenusa(cateto1, cateto2);
  printf("Valor da hipotenusa: %.2f\n", valorHipotenusa);

  return 0;
}