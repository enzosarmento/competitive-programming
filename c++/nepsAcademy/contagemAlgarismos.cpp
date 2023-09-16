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

  int n, a; cin >> n;
  vector<pair<int, int>> v(10);

  for(int i = 0; i < 10; i++) {
    v[i].f = i;
    v[i].s = 0;
  }

  for(int i = 0; i < n; i++) {
    cin >> a;
    while(a > 0) {
      int digito = a % 10;
      v[digito].second++;

      a /= 10;
    }
  }
    
  for(int i = 0; i < v.size(); i++)
    cout << v[i].f << " - " << v[i].s << endl; 

  return 0;
}