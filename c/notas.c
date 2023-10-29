#include <stdio.h>

int main() {

  int n;
  float nota, soma = 0;

  printf("Digite a quantidade de notas: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%f", &nota);
    if(nota < 0 || nota > 10) {
      printf("Digite uma nota entre 0 e 10!\n");
      i--;
    } else
      soma += nota;
  }

  printf("Media: %.1f\n", soma / n);

  return 0;
}