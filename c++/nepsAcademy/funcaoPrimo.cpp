#include "template.h"

bool eh_primo(int n);

int main() { _;
  int n; cin >> n;

  if(eh_primo(n))
    cout << 'S' << endl;
  else
    cout << 'N' << endl;
  
  return 0;
}

bool eh_primo(int n) {
  if(n < 2)
    return false;
  for(int i = 2; i <= sqrt(n); i++) {
    if(n % i == 0)
      return false;
  }
  return true;
}