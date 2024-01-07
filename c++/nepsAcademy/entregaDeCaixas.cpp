#include "template.h"

int main() { _;

  int x, y, z, ans = 0; cin >> x >> y >> z;

  if(x == y && x == z) {
    cout << 3 << endl;
    return 0;
  }

  if(x < y && y < z)
    cout << 1 << endl;
  else if(x == y && (x + y) < z)
    cout << 1 << endl;
  else if(x < y && y == z)
    cout << 2 << endl;
  else if(x == y && (x + y) >= z)
    cout << 2 << endl;
  

  return 0;
}