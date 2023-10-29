#include <stdio.h>
#include <math.h>

int main() {

  int b, n = 0, i = 0;
  scanf("%d", &b);

  while(b > 0) {
    n += (b % 10) * pow(2, i);
    b /= 10;
    i++;
  }

  printf("%d\n", n);

  return 0;
}