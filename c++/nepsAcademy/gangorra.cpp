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

  int p1; int c1; int p2; int c2; cin >> p1 >> c1 >> p2 >> c2;

  int t1 = p1 * c1;
  int t2 = p2 * c2;

  if(t1 == t2)
    cout << "0" << endl;
  else if(t1 < t2)
    cout << "1" << endl;
  else
    cout << "-1" << endl;
  
  return 0;
}