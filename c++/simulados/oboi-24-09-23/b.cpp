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

  string s, t;
  int ans = 0;
  getline(cin, s);
  getline(cin, t);
  vector<int> v(s.size());

  for(int i = 0; i < v.size(); i++) {
    v[i] = s[i] - 'A';
    if(v[i] == 25 && t[i] - 'A' == 1) {
      ans = 1;
    } else if(v[i] == 1 && t[i] - 'A' == 25) {
      ans = 1;
    } else {
      if(v[i] < t[i] - 'A') {
        if(v[i] + 2 == t[i] - 'A') {
          ans = 1;
        } else {
          ans = 0;
        }
      } else {
        if(v[i] - 2 == t[i] - 'A') {
          ans = 1;
        } else {
          ans = 0;
        }
      }
    }
  }

  //cout << 'Z' - 'A' + 2 << endl;
  //cout << 'B' - 'A' << endl;

  if(ans)
    cout << 'S' << endl;
  else
    cout << 'N' << endl;

  return 0;
}