#include "template.h"

int main() { _;

  int n; cin >> n;
  map<int, int> p;

  for(int i = 0; i < n; i++) {
    int v; cin >> v;
    p[v] = 1;
  }

  int ans = p.size();

  cout << ans << endl;

  return 0;
}