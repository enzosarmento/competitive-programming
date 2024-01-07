#include "template.h"

int main() { _;

  int c, n, ans = 0; cin >> c >> n;
  priority_queue<int, vector<int>, greater<int>> clients;

  for(int i = 0; i < c; i++) {
    int t, d; cin >> t >> d;
    clients.push(t + d);
  }

  for(int i = c; i < n; i++) {
    int t, d; cin >> t >> d;
    int time = clients.top();
    clients.pop();

    if(time - t > 20) ans++;

    clients.push(max(time, t) + d);
  }

  cout << ans << endl;

  return 0;
}