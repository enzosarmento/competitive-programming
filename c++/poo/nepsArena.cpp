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

class Character {
  protected:
    int life;
    int def;

    int *atacks;

    void hit(Character b) {};

  public:
    int getLife() { return life; }

    void takeDamage(int damage) {
      this->life -= (damage - def) > 0 ? (damage - def) : 0;
    }

    int *getAtacks() { return atacks; }
    
};

class Hero : public Character {
  public:
    Hero(int life, int def, int atack1, int atack2) {
      this->life = life;
      this->def = def;
      this->atacks = new int[2];
      this->atacks[0] = atack1;
      this->atacks[1] = atack2;
    }

    void hit(Character &b, int option) {
      b.takeDamage(this->atacks[option]);
    }

};

class Enemy : public Character {
  public:
    Enemy(int life, int def, int atack) {
      this->life = life;
      this->def = def;
      this->atacks = new int(atack);
    }

    void hit(Character &b) {
      b.takeDamage(*atacks);
    }
};

int main() { _;

  int life, def, atack1, atack2;
  cin >> life >> def >> atack1 >> atack2;

  Hero hero = Hero(life, def, atack1, atack2);

  cin >> life >> def >> atack1;

  Enemy enemy = Enemy(life, def, atack1);

  int rounds, option; cin >> rounds;

  for(int i = 0; i < rounds && enemy.getLife() > 0 && hero.getLife() > 0; i++) {
    cin >> option;
    hero.hit(enemy, option);
    enemy.hit(hero);
  }

  if((hero.getLife() <= 0 && enemy.getLife() <= 0) || (hero.getLife() > 0 && enemy.getLife() > 0)) {
    cout << "EMPATE" << endl;
  } else if(hero.getLife() > 0) {
    cout << "HEROI" << endl;
  } else {
    cout << "INIMIGO" << endl;
  }

  return 0;
}