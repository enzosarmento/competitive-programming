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

  int n, i = 0;
  do {
    cin >> n;
    i++;

    if(n != 0)
      cout << "Teste " << i << endl << (1ll << n) - 1 << endl << endl;

  } while(n != 0);
  

  return 0;
}