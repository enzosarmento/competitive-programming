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

struct Character {
  string name;
  int atack;
  int def;
  int life;

  int survived(int damage) {
    return (def + life) - damage;
  }
};

int main() { _;

  Character character;
  int damage;
  cin >> character.name >> character.atack >> character.def >> character.life >> damage;

  if(character.survived(damage) > 0)
    cout << character.name << " sobreviveu!!!" << endl;
  else
    cout << character.name << " morreu :(" << endl;


  return 0;
}