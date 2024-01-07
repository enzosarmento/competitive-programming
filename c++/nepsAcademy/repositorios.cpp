#include "template.h"

int main() { _;

  int c, n; cin >> c >> n;
  map<int, int> r;

  for(int i = 0; i < c; i++) {
    int p, v; cin >> p >> v;
    r[p] = v;
  }

  map<int, int> ans;

  for(int i = 0; i < n; i++) {
    int p, v; cin >> p >> v;
    if(r.find(p) == r.end()) {
      ans[p] = v;
      r[p] = v;
    } else if(r[p] < v) {
      ans[p] = v;
      r[p] = v;
    }
  }

  for(auto x : ans) cout << x.f << ' ' << x.s << endl;

  return 0;
}