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

  int n, min = INF; cin >> n;
  vector<int> v(n);

  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < n; i++) {
    if(abs(v[i] - v[i + 1]) < min) {
      min = abs(v[i] - v[i + 1]);
    }
  }

  cout << min << endl;


  return 0;
}