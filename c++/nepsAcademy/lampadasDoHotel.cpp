#include "template.h"

int main() { _;

  int iA, iB, fA, fB, ans = 0; cin >> iA >> iB >> fA >> fB;

  while(iA != fA || iB != fB) {
    if(iB != fB) {
      iA = (iA == 0) ? 1 : 0;
      iB = (iB == 0) ? 1 : 0;
      ans++;
    } else {
      iA = (iA == 0) ? 1 : 0;
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}