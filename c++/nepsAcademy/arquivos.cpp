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

  int n, b, p1, p2, ans = 0; cin >> n >> b;
  vector<int> v(n);

  for(int i = 0; i < n; i++) cin >> v[i];

  sort(v.begin(), v.end(), decrescente);

  p1 = 0, p2 = (v.size() > 1) ? v.size() - 1 : 0;
  while(p1 <= p2) {
    if(v[p1] + v[p2] <= b) {
      ans++;
      p1++;
      p2--;
    } else {
      ans++;
      p1++;
    }
  }

  cout << ans << endl;

  return 0;
}