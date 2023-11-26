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

class Rectangle {
  int x1, y1, x2, y2;

  public:
    void setPoints(int x1, int y1, int x2, int y2) {
      this->x1 = x1;
      this->y1 = y1;
      this->x2 = x2;
      this->y2 = y2;
    }

    int area() {
      return abs((x2 - x1) * (y2 - y1));
    }

};

int main() { _;

  Rectangle rectangle;
  int n; cin >> n;

  for(int i = 0; i < n; i++) {
    int x1, y1, x2, y2;
    char operation; cin >> operation;

    if(operation == 'R') {
      cin >> x1 >> y1 >> x2 >> y2;
      rectangle.setPoints(x1, y1, x2, y2);
    } else if(operation == 'A') {
      cout << rectangle.area() << endl;
    }
  }


  return 0;
}