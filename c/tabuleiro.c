#include <stdio.h>

int main() {

  int m;
  scanf("%d", &m);

  for(int i = 0; i < m; i++) {
    for(int j = 0; j < m; j++) {
      if(j == 0)
        printf("|");

        if(j == m / 2)
          printf("XX");
        else {
          if(i % 2 == 0) {
            if(j % 2 == 0)
              printf("  ");
            else
              printf("EE");
          } else {
            if(j % 2 == 0)
              printf("EE");
            else
              printf("  ");
          }
        }
        
      if(j == m - 1)
        printf("|");
    }
    printf("\n");
  }

  return 0;
}