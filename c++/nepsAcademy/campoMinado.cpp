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
  vector<pair<int, int>> campo(n);

  for(int i = 0; i < n; i++) {
    cin >> campo[i].first;
    if(campo[i].first == 1)
      campo[i].second = 1;
  }

  for(int i = 0; i < n; i++) { 
    if(i == 0 && campo[i + 1].first == 1)
      campo[i].second++;
    else {
      if(campo[i - 1].first == 1)
        campo[i].second++;
      if(campo[i + 1].first == 1)
        campo[i].second++;
    }
  }

  for(int i = 0; i < n; i++)
    cout << campo[i].second << endl;
    
    
  return 0;
}