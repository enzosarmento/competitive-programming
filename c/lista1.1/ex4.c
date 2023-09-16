#include <stdio.h>
#include <math.h>

int main() {

  int c1, c2;
  scanf("%d%d", &c1, &c2);

  int hipotenusa = sqrt(pow(c1, 2) + pow(c2, 2));

  printf("hipotenusa = %d\n", hipotenusa);

  return 0;
}