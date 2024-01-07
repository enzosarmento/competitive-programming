#include "template.h"

int main() { _;

  int n; cin >> n;
  set<int> s;
  vector<int> v(n);
  map<int, int> m;

  for(int i = 0; i < n; i++) {
    cin >> v[i];
    if(m.find(v[i]) == m.end())
        m[v[i]] = 1;
      else
        m[v[i]]++;
  }

  sort(v.begin(), v.end());


  int ans = m[v[0]];
  for(int i = 1; i < n; i++) {
    ans = max(ans, m[v[i]]);
  }

  for(auto x : m) {
    if(x.s == ans)
      cout << x.f << ' ';
  }

  cout << endl;

  return 0;
}