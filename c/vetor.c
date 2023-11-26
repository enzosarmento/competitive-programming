#include <stdio.h>

int main() {

  int temp, x, y, a[4], b[5], c[4];

  for(int i = 0; i < 5; i++) {
    scanf("%d", &x);
    b[i] = x;

    if(i < 4) {
      scanf("%d", &y);
      a[i] = y;
    }
  }

  for(int i = 0; i < 4; i++) {
    c[i] = (a[i] + b[i]) * b[4];
    printf("%d ", c[i]);
  }
  printf("\n");

  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 3; j++) {
      if(c[j] > c[j + 1]) {
        temp = c[j];
        c[j] = c[j + 1];
        c[j + 1] = temp;
      }
    }
  }

  for(int i = 0; i < 4; i++) printf("%d ", c[i]);

  printf("\n");

  return 0;
}