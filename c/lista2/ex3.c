#include <stdio.h>

int main() {

  int a = 5;
  int b = 4;
  int c = 3;

  if(a > b > c) {
    printf("maior %d, menor %d\n", a, c);
  }

  return 0;
}