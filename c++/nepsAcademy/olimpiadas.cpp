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

struct Country {
  int id;
  int gold = 0;
  int silver = 0;
  int bronze = 0;

};

int totalCountry;
int totalModalities;
int gold;
int silver;
int bronze;

Country v[103];

bool compare(Country c1, Country c2);

int main() { _;

  cin >> totalCountry >> totalModalities;

  for(int i = 0; i < totalCountry; i++) v[i].id = i + 1;

  for(int i = 0; i < totalModalities; i++) {
    cin >> gold >> silver >> bronze;

    v[--gold].gold += 1;
    v[--silver].silver += 1;
    v[--bronze].bronze += 1;
  }

  sort(v, v + totalCountry, compare);

  for(int i = 0; i < totalCountry; i++) {
    if(i != 0)
      cout << ' ';

    cout << v[i].id;  
  }

  cout << '\n';

  return 0;
}

bool compare(Country c1, Country c2) {
  if(c1.gold > c2.gold) return 1;
  else if(c2.gold > c1.gold) return 0;
  else if(c1.silver > c2.silver) return 1;
  else if(c2.silver > c1.silver) return 0;
  else if(c1.bronze > c2.bronze) return 1;
  else if(c2.bronze > c1.bronze) return 0;
  else if(c1.id < c2.id) return 1;

  return 0;
}