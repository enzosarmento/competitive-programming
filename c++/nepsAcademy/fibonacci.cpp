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

int fibonacci(int n) {
  if(n == 0 || n == 1)
    return 1;
  else
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() { _;

  int n; int fib; cin >> n;

  fib = fibonacci(n);

  cout << fib << endl;

  return 0;
}