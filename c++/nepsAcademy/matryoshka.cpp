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

  int n, temp, ans = 0; cin >> n;
  vector<int> v1(n);
  vector<int> v2(n);
  vector<int> t;

  for(int i = 0; i < n; i++) {
    cin >> v1[i];
    v2[i] = v1[i];
  }

  sort(v1.begin(), v1.end());

  for(int i = 0; i < n; i++) {
    if(v1[i] != v2[i]) {
      ans++;
      t.push_back(v1[i]);
    }
  }

  cout << ans << endl;

  for(auto x : t)
    cout << x << " ";
  cout << endl;

  return 0;
}