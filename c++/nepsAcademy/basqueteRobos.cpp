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

  int d; cin >> d;

  if(d <= 800)
    cout << 1 << endl;
  else if(d > 800 && d <= 1400)
    cout << 2 << endl;
  else if(d > 1400 && d <= 2000)
    cout << 3 << endl;

  return 0;
}