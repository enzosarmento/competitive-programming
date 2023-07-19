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

  int p; int r; cin >> p >> r;

  if(p == 0 && r == 0)
    cout << "C" << endl;
  else if(p == 1 && r == 0)
    cout << "B" << endl;
  else if(p == 1 && r == 1)
    cout << "A" << endl;
  else
    cout << "C" << endl;

  return 0;
}