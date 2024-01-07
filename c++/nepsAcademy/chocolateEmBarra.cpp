#include "template.h"

int main() { _;

  int n, x1, y1, x2, y2; cin >> n >> x1 >> y1 >> x2 >> y2;
  
  if((x1 <= n / 2 && x2 > n / 2 && x2 <= n) || (x2 <= n / 2 && x1 > n / 2 && x1 <= n)) {
    cout << 'S' << endl;
  } else if((y1 <= n / 2 && y2 > n / 2 && y2 <= n) || (y2 <= n / 2 && y1 > n / 2 && y1 <= n)) {
    cout << 'S' << endl;
  } else
    cout << 'N' << endl;

  return 0;
}