#include "template.h"

int main() { _;

  int a, b, ans = 0; cin >> a >> b;
  set<int> sA, sB;

  for(int i = 0; i < a; i++) {
    int x; cin >> x;
    sA.insert(x);
  }

  for(int i = 0; i < b; i++) {
    int y; cin >> y;
    sB.insert(y);
  }

  if(sB.size() < sA.size()) {
    for(auto x : sB) {
      if(sA.find(x) == sA.end())
        ans++;
    }
  } else {
    for(auto x : sA) {
      if(sB.find(x) == sB.end())
        ans++;
    }
  }

  cout << ans << endl;

  return 0;
}