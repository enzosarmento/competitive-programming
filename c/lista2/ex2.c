#include <stdio.h>

int main() {

  int a, b;
  scanf("%i%i", &a, &b);

  if(a > b) {
    printf("%i e maior\n", a);
  } else if(b > a) {
    printf("%i e maior\n", b);
  } else {
    printf("estes numeros sao iguais\n");
  }

  return 0;
}