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

struct Enemy {
  int id;
  int x;
  int y;
  bool alive;

  Enemy() {
    id = -1;
    x; -1;
    y = -1;
    alive = false;
  }

  Enemy(int ID, int X, int Y, bool Alive) {
    id = ID;
    x = X;
    y = Y;
    alive = Alive;
  }

  void wasAgreed(int X, int Y) {
    if(x == X && y == Y)
      alive = false;
  }
};

int main() { _;

  int n; cin >> n;
  Enemy enemies[n];

  for(int id = 0; id < n; id++) {
    int x, y; cin >> x >> y;
    enemies[id] = Enemy(id, x, y, true);
  }

  int m; cin >> m;

  for(int i = 0; i < m; i++) {
    int x, y; cin >> x >> y;

    for(int id = 0; id < n; id++) {
      enemies[id].wasAgreed(x, y);
    }
  }

  for(auto x : enemies) {
    if(!x.alive)
      cout << x.id << ' ';
  }

  cout << endl;


  return 0;
}