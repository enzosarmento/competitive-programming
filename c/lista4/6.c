#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool ehPrimo(int n) {
  if(n < 2)
    return false;
  for(int i = 2; i <= sqrt(n); i++) {
    if(n % i == 0)
      return false;
  }
  return true;
}

int main() {

  for(int i = 2; i <= 1000; i++) {
    if(ehPrimo(i))
      printf("%d ", i);
  }
  printf("\n");

  return 0;
}