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
const int MAX = 1e5+10;

int n, c, t;
int pipoca[MAX];

bool possivel(ll chute) {
  int competidores = 1;
  ll resta = t * chute;
  for(int i = 0; i < n; i++) {
    if(resta >= pipoca[i]) resta -= pipoca[i];
    else {
      competidores++;
      resta = t * chute;
      i--;
    }
    if(competidores > c) return 0;
  }
  return 1;
}

int main() { _;

  cin >> n >> c >> t;
  
  for(int i = 0; i < n; i++) {
    cin >> pipoca[i];
  };

  int l = 0, r = 1e9+1;
  while(l < r) {
    int m = (l + r) / 2;

    if(!possivel(m)) l = m + 1;
    else r = m;
  }

  cout << l << endl;

  return 0;
}