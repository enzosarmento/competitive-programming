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

  int n, ans = 0; cin >> n;
  vector<int> v({1, 5, 10, 25, 50, 100});

  for(int i = v.size() - 1; i >= 0; i--) {
    while(n >= v[i]) {
      if(v[i] != 1) {
        ans += n / v[i];
        n = n % v[i];
      } else {
        n--;
        ans++;
      }
    }
  }

  cout << ans << endl;


  return 0;
}