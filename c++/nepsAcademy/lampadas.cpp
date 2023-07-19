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
  int a = 0; int b = 0; int in;

  for(int i = 0; i < n; i++) {
    cin >> in;

    if(in == 1)
      a = (a == 0) ? 1 : 0;
    
    if(in == 2) {
      a = (a == 0) ? 1 : 0;
      b = (b == 0) ? 1 : 0;
    }
  }

  cout << a << endl << b << endl;


  return 0;
}