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
  int n1; int n2; cin >> n1 >> n2;

  int average = (n1 * 2 + n2 * 3) / 5;

  if(average >= 7)
    cout << "Aprovado" << endl;
  else if(average < 3)
    cout << "Reprovado" << endl;
  else
    cout << "Final" << endl;

  return 0;
}