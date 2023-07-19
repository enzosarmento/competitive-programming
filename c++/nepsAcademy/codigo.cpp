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

  int n; int b; int q = 0; cin >> n;
  vector<int> v(n);

  for(int i = 0; i < n; i++) {
    cin >> b;
    v[i] = b;
  }

  for(int i = 0; i < n - 2; i++) {
    if(v[i] == 1 && v[i + 1] == 0 && v[i + 2] == 0) {
      q++;
      i += 2;
    }
  }

  cout << q << endl;

  return 0;
}