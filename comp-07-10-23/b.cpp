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

  int q[4][4], ans = 0;
  int l[4] = {0, 0, 0, 0}, c[4] = {0, 0, 0, 0};

  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      cin >> q[i][j];
      l[i] += q[i][j];
      c[j] += q[i][j];
    }
  }
  
  for(int i = 0; i < 4; i++) {
    if(l[i] == c[i] && l[i] == l[i + 1])
      ans = 1;
    else
      ans = 0;
  }

  if(ans)
    cout << "magic" << endl;
  else 
    cout << "not magic" << endl;

  return 0;
}