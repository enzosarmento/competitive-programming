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

  int n, k, p1, p2; cin >> n;
  vector<int> v(n);

  for(int i = 0; i < n; i++) cin >> v[i];

  cin >> k;

  p1 = 0, p2 = v.size() - 1;
  while(p1 != p2) {
    int soma = v[p1] + v[p2];
    if(soma == k)
      break;
    else if(soma > k)
      p2--;
    else
      p1++;
  }

  cout << v[p1] << ' ' << v[p2] << endl;

  return 0;
}