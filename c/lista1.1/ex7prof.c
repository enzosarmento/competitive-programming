#include <stdio.h>

int main() {

  int n;
  double s = 0.0;
  scanf("%d", &n);

  if(n > 0) {
    int i = 1;
    
    while(i < n) {
      s += i / 2.0;
      i++;
    }

    printf("%f\n", s);
  }

  return 0;
}