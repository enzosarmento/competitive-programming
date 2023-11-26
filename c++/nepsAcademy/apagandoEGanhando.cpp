#include "template.h"

int main() { _;

  int n, d; cin >> n >> d;

  do {
    
    string str, ans;
    stack<int> p;
    cin >> str;
    
    int erased = 0;
    for(char cur : str) {
      while(ans.size() > 0 && cur > ans.back() && erased < d) {
        ans.pop_back();
        erased++;
      }

      if(ans.size() < n - d) ans.push_back(cur);
    }

    cout << ans << endl;
    cin >> n >> d;
  } while(n != 0 && d != 0);

  return 0;
}