#include "template.h"

int main() { _;

  int n, dP = 0, dS = 0; cin >> n;
  int v[n][n];
  vector<int> l(n, 0), c(n, 0);

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> v[i][j];
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j)
        dP += v[i][j];
      if(i == abs((n - 1) - j))
        dS +=v[i][j];
      l[i] += v[i][j];
      c[j] += v[i][j];
    }
  }

  set<int> s;
  s.insert(dP);
  s.insert(dS);
  for(auto x : l) {
    s.insert(x);
  }

  for(auto x : c) {
    s.insert(x);
  }

  if(s.size() == 1)
    cout << dP << endl;
  else
    cout << -1 << endl;

  return 0;
}