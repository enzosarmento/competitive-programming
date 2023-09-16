#include <stdio.h>

int main() {

  int x, y;
  scanf("%d%d", &x, &y);

  if(x > 0 && y > 0)
    printf("Quadrante 1\n");
  else if(x > 0 && y < 0)
    printf("Quadrante 4\n");
  else if(x < 0 && y > 0)
    printf("Quadrante 2\n");
  else if(x < 0 && y < 0)
    printf("Quadrante 3\n");

  return 0;
}