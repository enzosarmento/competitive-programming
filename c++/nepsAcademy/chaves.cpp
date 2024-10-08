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

int makePair(char x, char y) {
  switch(x) {
    case '}':
      if(y == '{')
        return 1;
      else 
        return 0;
      break;
    default:
      return 0;
  }
}

int main() { _;

  int n; cin >> n;
  stack<char> p;
  string str;
  bool ans = true;
  for(int i = 0; i < n + 1; i++) {
    getline(cin, str);
    //cout << endl << i << ' ' << str << endl;

    for(int j = 0; j < str.size(); j++) {
      if(str[j] == '{') {
        p.push(str[j]);
      } else {
        if(!p.empty()) {
          if(makePair(str[j], p.top()) == 0) {
            ans = false;
            continue;
          } else {
            p.pop();
          }
        } else {
          if(str[j] == '}') {
            ans = false;
            break;
          }
        }
      }
    }
  }

  if(ans)
    cout << 'S' << endl;
  else {
    cout << 'N' << endl;
  }

  return 0;
}