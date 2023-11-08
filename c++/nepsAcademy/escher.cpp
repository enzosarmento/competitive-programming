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

  int n, p1, p2, soma; cin >> n;
  char ans = 'S';
  vector<int> v(n);

  for(int i = 0; i < n; i++) cin >> v[i];

  p1 = 1, p2 = v.size() - 2, soma = v[0] + v[n - 1];
  while(p1 <= p2) {
    if(soma != v[p1] + v[p2]) {
      ans = 'N';
      break;
    }
    p1++;
    p2--;
  }

  cout << ans << endl;

  return 0;
}