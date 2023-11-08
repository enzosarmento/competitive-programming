#include <stdio.h>
#include <stdlib.h>

void perfeito(int a) {

  int i = 1, temp = 0;
  while(i < a) {
    if(a % i == 0)
      temp += i;
    i++;
  }

  if(temp == a) {

    printf("%d = ", temp);
    i = 1, temp = 0;

    while(i < a) {
      if(a % i == 0) {
        temp += i;
        if(temp != a)
          printf("%d + ", i);
        else
          printf("%d\n", i);
      }
      i++;
    }
  }
}

int main() {

  for(int i = 1; i <= 100; i++)
    perfeito(i);

  return 0;
}