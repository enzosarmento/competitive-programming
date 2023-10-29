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

  int n, count = 0;
  vector<int> v(10);
  vector<int> p;

  for(int i = 0; i < 10; i++)
    cin >> v[i];

  cin >> n;

  for(int i = 0; i < 10; i++) {
    if(v[i] == n) {
      count++;
      p.push_back(i);
    }
  }

  if(count) {
    cout << count << endl;
    for(auto x : p) {
      cout << x << " ";
    }
    cout << endl;
  } else
    cout << "Mia x" << endl;


  return 0;
}