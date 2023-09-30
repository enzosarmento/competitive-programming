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

  int n, m, ans = 0; cin >> n >> m;
  vector<int> v(n);

  for(int i = 0; i < n; i++)
    cin >> v[i];

  for(int i = 0; i < n; i++) {
    if(v[i] != m) {
      int vezes = abs(m - v[i]);
      if(v[i] < m) {
        v[i] += vezes;
        v[i + 1] += vezes;
        ans += vezes;
      } else {
        v[i] -= vezes;
        v[i + 1] -= vezes;
        ans += vezes;
      }
    }
  }

  cout << ans << endl;


  return 0;
}