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

int main() {

  int L, C, t1, t2; cin >> L >> C;
  
  t1 = (L * C) + ((L - 1) * (C - 1));
  t2 = (2 * (L - 1) + (2 * (C - 1)));

  cout << t1 << endl << t2 << endl;

  return 0;
}