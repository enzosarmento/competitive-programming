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

  vector<int> v(4);

  for(int i = 0; i < 4; i++)
    cin >> v[i];

  if((v[0] == v[2] && v[1] != v[3]) || (v[1] == v[3] && v[0] != v[2]))
    cout << "V" << endl;
  else
    cout << "F" << endl;


  return 0;
}