#include <stdio.h>

int main() {

  int n, cinquenta = 0, vinte = 0, dez = 0, um = 0;
  scanf("%i", &n);

  while(n > 0) {
    if(n >= 50) {
      cinquenta = n / 50;
      n = n % 50; 
    } else if(n >= 20) {
      vinte = n / 20;
      n = n % 20;
    } else if(n >= 10) {
      dez = n / 10;
      n = n % 10;
    } else if(n >= 1) {
      n--;
      um++; 
    }
  }

  printf("cinquenta: %i\nvinte: %i\ndez: %i\num: %i\n", cinquenta, vinte, dez, um);


  return 0;
}