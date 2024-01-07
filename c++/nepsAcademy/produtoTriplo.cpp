#include "template.h"

int main() { _;

  ll n; cin >> n;
  ll v[n];

  for(ll i = 0; i < n; i++) cin >> v[i];

  ll ans1 = v[n - 1] * v[n - 2] * v[n - 3];
  ll ans2 = v[0] * v[1] * v[n - 1];
  ll ans = max(ans1, ans2);

  cout << ans << endl;

  return 0;
}