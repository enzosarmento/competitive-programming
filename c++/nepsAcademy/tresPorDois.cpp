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

bool decrescente(int a, int b) {
  return a > b;
}

int main() { _;

  int n, ans = 0, soma = 0; cin >> n;
  vector<int> v(n);

  for(int i = 0; i < n; i++) cin >> v[i];

  sort(v.begin(), v.end(), decrescente);

  for(int i = 0; i < n; i += 3) {
    if (i + 1 < n) {
        ans += v[i] + v[i + 1];
    } else {
        ans += v[i];
    }
  }

  cout << ans << endl;

  return 0;
}