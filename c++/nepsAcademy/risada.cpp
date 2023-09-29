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

  string str, str2, str3; cin >> str;
  vector<int> v({0, 4, 8, 14, 20});

  for(int i = 0; i < str.size(); i++) {
    for(int j = 0; j < v.size(); j++) {
      if((str[i] - 'a') == v[j]) {
        str2 += str[i];
      }
    }
  }

  for(int i = str2.size() - 1; i >= 0; i--)
    str3 += str2[i];

  if(str2 == str3)
    cout << 'S' << endl;
  else
    cout << 'N' << endl;

  return 0;
}