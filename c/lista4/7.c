#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int caraOuCoroa() {
  return rand() % 10;
}

int main() {
  srand(time(NULL));
  
  int cara = 0, coroa = 0;

  for(int i = 0; i < 100; i++) {  
    if(caraOuCoroa())
      cara++;
    else
      coroa++;
  }

  printf("Cara: %d\nCoroa: %d\n", cara, coroa);
  
  return 0;
}