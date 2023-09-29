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

  int n, couple = 0; cin >> n;
  vector<pair<int, int>> v(61, {0, 0});

  for(int i = 0; i < n; i++) {
    int m;
    char l; cin >> m >> l;

    if(l == 'E')
      v[m].f++;
    else
      v[m].s++; 
  }

  for(int i = 0; i < v.size(); i++)
    couple += min(v[i].f, v[i].s);

    
  cout << couple << endl;


  return 0;
}