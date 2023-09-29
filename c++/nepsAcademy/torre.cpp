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
  int t[n][n];
  vector<int> linha(n, 0);
  vector<int> coluna(n, 0);
  int ans = 0;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> t[i][j];
      linha[i] += t[i][j];
      coluna[j] += t[i][j];
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(linha[i] + coluna[j] - 2*t[i][j] > ans)
        ans = linha[i] + coluna[j] - 2*t[i][j];
    }
  }

  cout << ans << endl;

  return 0;
}