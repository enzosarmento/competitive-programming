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

bool eh_primo(int x) {
	int cont = 0;

  for(int i = 1; i <= x; i++) {
    if(x % i == 0) {
      cont++;
    }
  }

  if(cont == 2)
    return true;
  else
    return false;
}

int main() { _;

  int x; cin >> x;

	if(eh_primo(x)) {
		cout << "S" << "\n";
	}else {
		cout << "N" << "\n";
	}

  return 0;
}