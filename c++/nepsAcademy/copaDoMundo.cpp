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

  int x, y, j = 0;
  queue<int> f8, f4, f2, f;

  for(int i = 0; i < 15; i++) {
    cin >> x >> y;
    if(i < 8) {
      if(x > y)
        f8.push(j);
      else 
        f8.push(j + 1);
      j += 2;
    } else if(i < 12) {
      if(x > y) {
        f4.push(f8.front());
        f8.pop();
        f8.pop();
      } else {
        f8.pop();
        f4.push(f8.front());
        f8.pop();
      } 
    } else if(i < 14) {
      if(x > y) {
        f2.push(f4.front());
        f4.pop();
        f4.pop();
      } else {
        f4.pop();
        f2.push(f4.front());
        f4.pop();
      }
    } else {
      if(x > y)
        f.push(f2.front());
      else {
        f2.pop();
        f.push(f2.front());
      }
    }
  }

  cout << (char)(f.front() + 'A') << endl;

  return 0;
}
