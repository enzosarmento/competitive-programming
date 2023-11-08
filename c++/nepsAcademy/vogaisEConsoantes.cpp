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

  string str;
  getline(cin, str);
  vector<char> v, c;

  for(int i = 0, j = 0, k = 0; i < str.size(); i++) {
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
      v.push_back(str[i]);
    else
      c.push_back(str[i]);
  }

  cout << "Vogais: ";
  for(auto x : v)
    cout << x;

  cout << endl;

  cout << "Consoantes: ";
  for(auto x : c)
    cout << x;

  cout << endl;

  return 0;
}