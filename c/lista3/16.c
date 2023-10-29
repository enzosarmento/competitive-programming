#include <stdio.h>

int main() {

  int n, temp, fibo = 1;
  scanf("%d", &n);

  for(int i = 0, j = 0; i < n; i++) {
    j += fibo;
    temp = fibo;
    fibo = j;
    j = temp;
  }

  printf("%d\n", fibo);

  return 0;
}