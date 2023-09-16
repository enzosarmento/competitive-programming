#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);

  if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0) {
    printf("Eh biossesto\n");
  } else {
    printf("Nao eh biossesto\n");
  }


  return 0;
}