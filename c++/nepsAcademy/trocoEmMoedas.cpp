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

  int n, ans = 0; cin >> n;
  vector<int> v(6, 0);

  for(int i = 0; i < 6; i++) {
    if(n >= 100 && i == 0) {
      v[i] = n / 100;
      n %= 100;
      ans += v[i];
    } else if(n >= 50 && i == 1) {
      v[i] = n / 50;
      n %= 50;
      ans += v[i];
    } else if(n >= 25 && i == 2) {
      v[i] = n / 25;
      n %= 25;
      ans += v[i];
    } else if(n >= 10 && i == 3) {
      v[i] = n / 10;
      n %= 10;
      ans += v[i];
    } else if(n >= 5 && i == 4) {
      v[i] = n / 5;
      n %= 5;
      ans += v[i];
    } else if(n > 1 && i == 5) {
      v[i] = n / 1;
      n = 0;
      ans += v[i];
    }
  }
  
  cout << ans << endl;
  for(auto x : v) cout << x << endl;
  

  return 0;
}