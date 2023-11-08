#include <stdio.h>
#include <math.h>

float distanciaEntreDoisPontos(float x0, float y0, float x1, float y1) {
  return sqrt(pow(x0 - x1, 2) + pow(y0 - y1, 2));
}

int main() {

  float x0, y0, x1, y1, total = 0;
  int n;
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%f%f%f%f", &x0, &y0, &x1, &y1);
    printf("Distancia: %.2f\n", distanciaEntreDoisPontos(x0, y0, x1, y1));
    total += distanciaEntreDoisPontos(x0, y0, x1, y1);
  }

  printf("Distancia media: %.2f\n", total / n);

  return 0;
}