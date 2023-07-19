#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0);cin.tie(0)
#define endl '\n'
#define f first
#define s second ddsdsaddsd

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _;

  int n;
  vector<pair<int, int>> v(4);

  for(int i = 1; i < 4; i++) {
    cin >> n;
    v[i].first = n;
  }

  if(v[1].first < v[2].first && v[2].first < v[3].first) {
    v[1].second = 1;
    v[2].second = 2;
    v[3].second = 3;
  } else if(v[1].first < v[3].first && v[3].first < v[2].first) {
    v[1].second = 1;
    v[2].second = 3;
    v[3].second = 2;
  } else if(v[2].first < v[1].first && v[1].first < v[3].first) {
    v[1].second = 2;
    v[2].second = 1;
    v[3].second = 3;
  } else if(v[2].first < v[3].first && v[3].first < v[1].first) {
    v[1].second = 2;
    v[2].second = 3;
    v[3].second = 1;
  } else if(v[3].first < v[1].first && v[1].first < v[2].first) {
    v[1].second = 3;
    v[2].second = 1;
    v[3].second = 2;
  } else if(v[3].first < v[2].first && v[2].first < v[1].first) {
    v[1].second = 3;
    v[2].second = 2;
    v[3].second = 1;
  }

  for(auto x : v) {
    if(x.second != 0)
      cout << x.second << endl;
  }

  return 0;
}