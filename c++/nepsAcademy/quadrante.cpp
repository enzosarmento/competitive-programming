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

  int x; int y; cin >> x >> y;

  if(x > 0 && y > 0)
    cout << "Q1" << endl;
  if(x < 0 && y > 0)
    cout << "Q2" << endl;
  if(x < 0 && y < 0)
    cout << "Q3" << endl;
  if(x > 0 && y < 0)
    cout << "Q4" << endl;
  if(x == 0 || y == 0)
    cout << "eixos" << endl;

  return 0;
}