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

  char c;
  int w = 0;

  for(int i = 0; i < 6; i++) {
    cin >> c;
    if(c == 'W')
      w++;
  }

  switch(w) {
    case 5 : case 6:
      cout << 1 << endl;
      break;
    case 3 : case 4:
      cout << 2 << endl;
      break;
    case 1 : case 2:
      cout << 3 << endl;
      break;
    default:
      cout << -1 << endl; 
  }

  return 0;
}