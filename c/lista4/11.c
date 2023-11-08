#include <stdio.h>

void horaDoDia(int s) {
  int horas, minutos, segundos;
  if(s >= 0 && s <= 86400) {
    horas = s / 3600;
    minutos = (s % 3600) / 60;
    segundos = (s % 3600) % 60;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
  } else
    printf("Valor invalido\n");
}

int main() {

  int s;
  scanf("%d", &s);
  horaDoDia(s);

  return 0;
}