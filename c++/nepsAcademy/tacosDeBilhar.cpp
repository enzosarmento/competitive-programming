#include "template.h"

int main() { _;

  int c, ans = 0; cin >> c;
  map<ll, ll> t;

  for(int i = 0; i < c; i++) {
    ll x; cin >> x;
    if(t.find(x) == t.end())
      t[x] = 1;
    else
      t[x]++;
  }

  for(auto x : t) {
    if(x.s == 1) {
      ans += x.s * 2;
    } else if(x.s % 2 == 0) {
      ans += x.s;
    } else {
      ans += x.s + 1;
    }
  }

  cout << ans << endl;

  return 0;
}