#include <stdio.h>
#include <math.h>

int main() {

  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  if(b == 0 || c == 0) {
    printf("Equacao esta incompleta\n");
  } else {
    int delta = pow(b, 2) - (4 * a * c);

    if(delta > 0) {

      double x1 = (-b + sqrt(delta)) / (2 * a);
      double x2 = (-b - sqrt(delta)) / (2 * a);
      printf("Raiz 1: %f\nRaiz 2: %f\n", x1, x2);

    } else if(delta == 0) {

      double x = -b / (2 * a);
      printf("Raiz: %f\n", x);

    } else if(delta < 0) {
      printf("Nao existe raiz real\n");
    }
  }

  return 0;
}