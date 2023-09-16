#include <stdio.h>

int mutuamentePrimos(int nMenor, int nMaior) {
  int i = 2, mPrimos = 1;
  while (i <= nMenor)
  {
    if(nMenor % i == 0 && nMaior % i == 0) {
      mPrimos = 0;
      break;
    }
    else
      mPrimos = 1;
    
    i++;
  }

  return mPrimos;
}

int main() {

  int n1, n2;
  scanf("%d%d", &n1, &n2);

  if(n1 < n2) {
    if(mutuamentePrimos(n1, n2))
      printf("Sao mutuamente primos\n");
    else
      printf("Nao sao mutuamente primos\n");
  } else {
    if(mutuamentePrimos(n2, n1))
      printf("Sao mutuamente primos\n");
    else
      printf("Nao sao mutuamente primos\n");
  }

  return 0;
}