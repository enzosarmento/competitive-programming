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

  int n; cin >> n;
  int a; char op; int b; cin >> a >> op >> b;
  int total = 0;

  if(op == '+')
    total = a + b;
  if(op == '*')
    total = a * b;
  
  if(total > n)
    cout << "OVERFLOW" << endl;
  else
    cout << "OK" << endl;

  return 0;
}