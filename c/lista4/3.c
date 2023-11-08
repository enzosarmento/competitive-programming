#include <stdio.h>

int ehMultiplo(int a, int b) {
  return (b % a == 0) ? 1 : 0;
}

int main() {

  int n, a, b;
  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d%d", &a, &b);
    printf("%d\n", ehMultiplo(a, b));
  }

  return 0;
}