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

  int n = -1;
  vector<int> v;

  while(n != 0) {
    cin >> n;
    v.push_back(n);
  }

  sort(v.begin(), v.end());

  cout << v[v.size() - 1] << endl;


  return 0;
}