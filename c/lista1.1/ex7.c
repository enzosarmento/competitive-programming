#include <stdio.h>

int main() {

  int n;
  double pi = 0.0;
  scanf("%d", &n);

  if(n > 0) {
    int i = 1;
    int sinal = 1;
    double termo;

    while (i <= n)
    {
      termo = 1 / (2.0 * i - 1);
      s += sinal * termo;
      sinal = -sinal;
      i++;
    }

    pi *= 4;
    
    printf("%lf\n", pi);
  }
  
  return 0;
}