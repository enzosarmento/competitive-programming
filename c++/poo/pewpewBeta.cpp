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

class Enemy {
  int id;
  int x;
  int y;
  bool alive;

  public:
    Enemy() {

    }

    Enemy(int id, int x, int y, bool alive) {
      this->id = id;
      this->x = x;
      this->y = y;
      this->alive = alive;
    }

    bool wasAgreed(int x, int y) {
      if(this->x == x && this->y == y && this->alive) {
        this->alive = false;
        return true;
      }
      return false;
    }
};

class Phase {
  Enemy *enemies;
  int numberEnemies;
  int scores;
  int munitions;

  public:
    Phase(int numberEnemies, int munitions) {
      this->enemies = new Enemy[numberEnemies];
      this->numberEnemies = numberEnemies;
      this->scores = 0;
      this->munitions = munitions;
    }

    void initializeEnemies() {
      for(int id = 0; id < numberEnemies; id++) {
        int x, y; cin >> x >> y;
        this->enemies[id] = Enemy(id, x, y, true);
      }
    }

    void play(int t) {
      for(int i = 0; i < t; i++) {
        int x, y; cin >> x >> y;
        for(int id = 0; id < numberEnemies; id++) {
          if(this->enemies[id].wasAgreed(x, y) && this->munitions > 0) {
            this->scores += 10;
          }
        }
        if(this->munitions > 0)
          this->munitions--;
      }
    }

    void printReport() {
      cout << "Relatorio da Fase" << endl;
      cout << "Pontuacao: " << this->scores << endl;
      cout << "Municao: " << this->munitions << endl;
    }
};

int main() { _;

  int n, m; cin >> n >> m;
  Phase phase = Phase(n, m);

  phase.initializeEnemies();

  int t; cin >> t;
  phase.play(t);
  phase.printReport();

  return 0;
}