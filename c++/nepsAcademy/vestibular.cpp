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

  int n; int a = 0; char c; cin >> n;
  vector<char> v1(n);
  vector<char> v2(n);

  for(int i = 0; i < n; i++) {
    cin >> c;
    v1[i] = c;
  }

  for(int i = 0; i < n; i++) {
    cin >> c;
    v2[i] = c;
    if(v2[i] == v1[i])
      a++;
  }
  
  cout << a << endl;

  return 0;
}