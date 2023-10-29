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

  int p, d1, d2, ans; cin >> p >> d1 >> d2;

  if(p)
    ans = ((d1 + d2) % 2 == 0) ? 1 : 0;
  else
    ans = ((d1 + d2) % 2 == 0) ? 0 : 1;

  cout << ans << endl;
  
  return 0;
}