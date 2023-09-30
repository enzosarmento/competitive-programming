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

  int n, m, o, p, b; cin >> n >> m;
  int matriz[m][3];
  vector<int> v(101, 0);

  for(int i = 0; i < m; i++) {
    for(int j = 0; j < 3; j++) {
      cin >> matriz[i][j];
    }
  }

  for(int i = 0; i < m; i++) {
    for(int j = 0; j < 3; j++) {
      int posi = matriz[i][j];
      if(j == 0) { 
        v[posi] += 3;
      } else if(j == 1) {
        v[posi] += 2;
      } else {
        v[posi] += 1;
      }
    }
  }

  sort(v.begin(), v.end());
  vector<pair<int, int>> ord;
  for(int i = 0; i <= 101; i++) {
    if(v[i] > 0) {
      ord.push_back({i, v[i]});
    }
  }

  sort(ord.begin(), ord.end());

  for(int i = 0; i < ord.size(); i++) {
    if(ord[i].s > 0)
      cout << ord[i].s << " ";
  }


  cout << endl;


  return 0;
}