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

class Stacks {
  int a, b, c;

  public:
    Stacks(int a, int b, int c) {
      this->a = a;
      this->b = b;
      this->c = c;
    }

    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }

    void remove_box(int a, int b, int c) {
      this->a = this->a - a > 0 ? this->a - a : 0;
      this->b = this->b - b > 0 ? this->b - b : 0;
      this->c = this->c - c > 0 ? this->c - c : 0;
    }

    bool all_empty() {
      if(this->a == 0 && this->b == 0 && this->c == 0)
        return true;
      
      return false;
    }
};

class Bot {
  protected:
    bool complete;

  public:
    bool complete_task() { return this->complete; }
    virtual void operate(Stacks &p) = 0;
};

class ModelA : public Bot {
  public:
    ModelA() {}

    void operate(Stacks &p) {
      if(!p.all_empty()) {
        p.remove_box(1, 1, 1);
      } else {
        this->complete = true;
      }
    }
};

class ModelB : public Bot {
  public:
    ModelB() {}

    void operate(Stacks &p) {
      if(!p.all_empty()) {
        if(p.get_a() > 0) {
          p.remove_box(3, 0, 0);
        } else if(p.get_b() > 0) {
          p.remove_box(0, 3, 0);
        } else {
          p.remove_box(0, 0, 3);
        }
      } else {
        this->complete = true;
      }
    }
};

int main() { _;

  Bot *modelA;
  Bot *modelB;
  modelA = new ModelA();
  modelB = new ModelB();

  int a, b, c; cin >> a >> b >> c;
  Stacks pA = Stacks(a, b, c);
  Stacks pB = Stacks(a, b, c);

  while(!modelA->complete_task() && !modelB->complete_task()) {
    modelA->operate(pA);
    modelB->operate(pB);
  }

  if(modelA->complete_task() && modelB->complete_task()) {
    cout << "EMPATE" << endl;
  } else if(modelA->complete_task()) {
    cout << "MODELO A" << endl;
  } else {
    cout << "MODELO B" << endl;
  }

  return 0;
}