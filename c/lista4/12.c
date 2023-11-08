#include <stdio.h>

int fatorial(int n) {
  int fat = 1;
  for(int i = n; i > 1; i--)
    fat *= i;
  
  return fat;
}

int main() {

  int n;
  scanf("%d", &n);

  for(int i = 1; i <= n; i++)
    printf("Fatorial de %d: %d\n", i, fatorial(i));

  return 0;
}