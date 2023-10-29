#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0)
#define endl '\n'
#define f first
#define s second

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _;

  int x, y, z, ans = 0; cin >> x >> y >> z;

  ans += (x % 2 == 0 || x % 5 == 0) ? 1 : 0;
  ans += (y % 2 == 0 || y % 5 == 0) ? 1 : 0;
  ans += (z % 2 == 0 || z % 5 == 0) ? 1 : 0;

  cout << ans << endl;

  return 0;
}