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

int distancia(int a, int x, int b, int y) {
  return abs(a - x) + abs(b - y);
}

int main() { _;

  int n; cin >> n;
  int somatorio = 0;
  vector<pair<int, int>> v(n);

  for(int i = 0; i < n; i++) {
    cin >> v[i].f; 
    cin >> v[i].s;
  }

  for(auto x : v)
    cout << x.f << " " << x.s << endl;

  for(int i = 0; i < n; i++) {
    if(i != n - 1) {
      somatorio += distancia(v[i].f, v[i + 1].f, v[i].s, v[i + 1].s);
      cout << "Valor somatorio em i: " << somatorio << endl;
    }
  }

  cout << somatorio << endl;

  return 0;
}