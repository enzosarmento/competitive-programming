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
  int sum = n;
  if(n == 0)
    sum = 1;
  else {
    for(int i = n - 1; i >= 1; i--)
    sum *= i;
  }
  
  cout << sum << endl;


  return 0;
}