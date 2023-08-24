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

  int n; cin >> n;
  vector<pair<int, int>> v(n);

  for(int i = 0; i < n; i++) {
    cin >> v[i].f;
    v[i].s = 0;
  }

  for(int i = 0; i < n; i++) {
    if(v[i].f == 0 && i > 0) {
      for(int j = i; j > -1; j--) {
        
      }
    }
  }


  return 0;
}