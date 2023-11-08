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

bool decrescente(int a, int b) {
  return a > b;
}

int verificaMedalhas(vector<int> maior, vector<int> menor, int ans) {
  while(1) {
    if(maior.size() > 1) {
      if(menor[0] < maior[1]) {
        maior.erase(maior.begin() + 1);
        ans++;
      } else
        break;
    } else
      break;
  }
  return ans;
}

int main() { _;

  int a, v, ans = 0; cin >> a >> v;
  vector<int> vA(a);
  vector<int> vV(v);

  for(int i = 0; i < a; i++) cin >> vA[i];
  for(int i = 0; i < v; i++) cin >> vV[i];

  sort(vA.begin(), vA.end(), decrescente);
  sort(vV.begin(), vV.end(), decrescente);

  ans = (vA[0] > vV[0]) ? verificaMedalhas(vA, vV, ans) : verificaMedalhas(vV, vA, ans);

  cout << ans << endl;

  return 0;
}