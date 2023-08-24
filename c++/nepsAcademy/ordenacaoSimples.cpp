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
  vector<int> v(n);

  for(int i = 0; i < n; i++)
    cin >> v[i];

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n - i - 1; j++) {
      if(v[j] > v[j + 1]) {
        int temp = v[j];
        v[j] = v[j + 1];
        v[j + 1] = temp;
      }
    }
  }

  for(int i = 0; i < n; i++) {
    if(i == n - 1)
      cout << v[i];
    else
      cout << v[i] << " ";
  }
    
  cout << endl;
  
  return 0;
}