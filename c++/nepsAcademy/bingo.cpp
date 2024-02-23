#include "template.h"

int main() {

  int n, k, u; cin >> n >> k >> u;
  vector<int> cnt(n + 1, 0);
  vector<vector<int>> cardsNumber(u + 1);

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= k; j++) {
      int x; cin >> x;
      cardsNumber[x].push_back(i);
    }
  }

  vector<int> ans;
  for (int i = 1; i <= u && ans.empty(); i++) {
    int x; cin >> x;
    for (int c: cardsNumber[x]) {
      cnt[c]++;
      if(cnt[c] == k)
        ans.push_back(c);
    }
  }

  for (auto x : ans) {
    cout << x << " ";
  }

  cout << endl;

  return 0;
}