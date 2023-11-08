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

  int S, a, b, menor = 0, maior = 0; cin >> S >> a >> b;

  for(int i = a, j = b; i <= b - a; i++, j--) {
    int temp = i, sum = 0;
    if(menor == 0) {
      while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
      }

      if(sum == S)
        menor = i;
    }
    temp = j, sum = 0;
    if(maior == 0) {
      while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
      }

      if(sum == S)
        maior = j;
    }
  }

  cout << menor << endl << maior << endl;

  return 0;
}