#include "template.h"

int main() { _;

  int a1, a2, a3, ans; cin >> a1 >> a2 >> a3;
  int m = max({a1, a2, a3});

  int ans1 = (a2 * 2) + (a3 * 4);
  int ans2 = (a1 * 2) + (a3 * 2);
  int ans3 = (a2 * 2) + (a1 * 4);

  ans = min({ans1, ans2, ans3});

  cout << ans << endl;

  return 0;
}