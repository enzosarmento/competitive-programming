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
  vector<int> v;

  for(int i = 0; i < n; i++) {
    int a; cin >> a;
    v.push_back(a);
  }

  int k; cin >> k;

  for(int i = 0; i < k; i++) {
    int remove; cin >> remove;
    auto temp = find(v.begin(), v.end(), remove);
    v.erase(temp);
  }

  for(int num : v)
    cout << num << " ";

  cout << endl;
  
  return 0;
}