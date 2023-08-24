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

  vector<int> v(10);

  for(int i = 0; i < 10; i++) {
    cin >> v[i];
  }

  int n; int verify = 0; cin >> n;

  for(int i = 0; i < 10; i++) {
    if(n == v[i]) {
      verify = 1;
      break;
    } else {
      verify = 0;
    }
  }

  if(verify)
    cout << "SIM" << endl;
  else
    cout << "NAO" << endl;

  return 0;
}