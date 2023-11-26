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

class Mathematics {
  public:

    static double average(double a, double b) {
      return (a + b) / 2.0;
    }

    static double average(double a, double b, double c) {
      return (a + b + c) / 3.0;
    }

    static int average_int(int a, int b) {
      return (a + b) / 2;
    }

    static int average_int(int a, int b, int c) {
      return (a + b + c) / 3;
    }
};

int main() { _;

  int n;
  char o;
  cin >> n >> o;

  if(n == 2) {
    double a, b; cin >> a >> b;

    if(o == 'R') {
      cout << fixed << setprecision(2) << Mathematics::average(a, b) << endl;
    } else {
      cout << Mathematics::average_int((int) a, (int) b) << endl;
    }
  } else {
    double a, b, c; cin >> a >> b >> c;

    if(o == 'R') {
      cout << fixed << setprecision(2) << Mathematics::average(a, b, c) << endl;
    } else {
      cout << Mathematics::average_int((int) a, (int) b, (int) c) << endl;
    }
  }
  return 0;
}