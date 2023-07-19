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

  int a; int b; int c; cin >> a >> b >> c;

  if(a != b && b == c)
    cout << "A" << endl;
  else if(b != a && a == c)
    cout << "B" << endl;
  else if(c != a && a == b)
    cout << "C" << endl;
  else
    cout << "*" << endl;

  return 0;
}