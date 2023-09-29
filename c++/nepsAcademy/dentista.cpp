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

  int n, ans = 1; cin >> n;
  vector<pair<int, int>> v(n);

  for(int i = 0; i < n; i++) {
    cin >> v[i].s >> v[i].f;
  }

  sort(v.begin(), v.end());

  int current = v[0].f;
  for(int i = 1; i < n; i++) {
    if(current <= v[i].s) {
      ans++;
      current = v[i].f;
    }
  }

  cout << ans << endl;


  return 0;
}