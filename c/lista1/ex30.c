#include <stdio.h>

int main() {

  int s;
  scanf("%d", &s);

  int horas = s / 3600;
  int minutos = (s % 3600) / 60;
  int segundos = (s % 3600) % 60;

  printf("%02d:%02d:%02d\n", horas, minutos, segundos);

  return 0;
}