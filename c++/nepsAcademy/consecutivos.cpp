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

  int n; int v; int p = 0; int d = 0; cin >> n;
  vector<int> v1(n);
  vector<int> v2;

  for(int i = 0; i < n; i++) {
    cin >> v;
    v1[i] = v;
  }

  for(int i = 0; i < n; i++) {

    if(v1[i] != v1[i + 1]) {
      v2.push_back(p);
      p = 0;
    } else 
      p++;
  }

  sort(v2.begin(), v2.end());

  cout << v2.back() + 1 << endl;

  return 0;
}