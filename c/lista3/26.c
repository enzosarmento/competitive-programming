#include <stdio.h>

int main() {

  int n;
  double pi = 0.0;
  scanf("%d", &n);

  if(n > 0) {
    int i = 1;
    int sinal = 1;
    double termo;

    for(int j = 1; j <= n; j++) {
      while (i <= j) {
        termo = 4 / (2.0 * i - 1);
        pi += sinal * termo;
        sinal = -sinal;
        i++;
      }
      
      printf("N = %d: %lf\n", j, pi);
      pi = 0;
      i = 1;
      sinal = 1;
    }
  }
  
  return 0;
}