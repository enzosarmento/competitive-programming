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

template <class T>
class MyDynamicVector {
  T *memory;
  int t_max;
  int t;

  public:
    MyDynamicVector(int t_max = 2) {
      this->memory = new T[t_max];
      this->t = 0;
      this->t_max = t_max;
    }

    ~MyDynamicVector() {
      delete this->memory;
    }

    T operator [](int index) {
      if(index < this->t)
        return this->memory[index];

      throw out_of_range("Index out of range!");
    }

    void add(T x) {
      this->memory[t] = x;
      this->t++;

      if(t == t_max) {
        this->t_max = 2*t_max;
        T *copy = new T[this->t_max];

        for(int i = 0; i < t; i++) {
          copy[i] = this->memory[i];
        }

        T *tmp = this->memory;
        this->memory = copy;

        delete tmp;
      }
    }

    void remove_last() {
      if(t > 0) {
        T *copy = new T[this->t_max];

        for(int i = 0; i < t - 1; i++) {
          copy[i] = this->memory[i];
        }

        T* tmp = this->memory;
        this->memory = copy;
        this->t--;

        delete tmp;
      }
    }

    int size() { return this-> t; }
};

int main() { _;

  MyDynamicVector<int> v;

  int n, x;
  char op;
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> op;

    if(op == 'A') {
      cin >> x;
      v.add(x);
    } else
      v.remove_last();
  }

  for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
  cout << endl;


  return 0;
}