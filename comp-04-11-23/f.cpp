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

  int n, l, c, ans = 0; cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> l >> c;
    int v[l][c];
    for(int j = 0; j < l; j++) {
      for(int k = 0; k < c; k++) {
        cin >> v[l][c];
      }
    }

    for(int j = 0; j < l; j++) {
      for(int k = 0; k < c; k++) {
        if(v[j][k] == 'w' && v[j][k + 1] == 'o' && v[j][k + 2] == 'r' && v[j][k + 3] == 'd')
          ans++;
      }
    }
  }


  return 0;
}