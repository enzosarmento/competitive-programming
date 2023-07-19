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

  double n1; double n2; cin >> n1 >> n2;

  double m = (n1 + n2) / 2;

  if(m >= 7.0)
    cout << "Aprovado" << endl;
  else if(m >= 4.0)
    cout << "Recuperacao" << endl;
  else
    cout << "Reprovado" << endl;

  return 0;
}