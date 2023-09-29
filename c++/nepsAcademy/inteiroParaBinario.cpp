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

int inteiroParaBinario(int n) {
  if(n == 0)
    return -1;
  else {
    return n % 2;
  }
}

int main() { _;

  int n; cin >> n;
  stack<int> p;

  if(n == 0)
      cout << 0;

  while(n > 0) {
    p.push(inteiroParaBinario(n));
    n /= 2;
  }

  while(!p.empty()) {
    
    if(p.top() != -1)
      cout << p.top();
    p.pop();
  }
  cout << endl;

  return 0;
}