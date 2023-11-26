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

class Fraction {
  public:
    int numerator, denominator;

    Fraction() {}

    Fraction(int numerator, int denominator) {
      this->numerator = numerator;
      this->denominator = denominator;
    }

    Fraction operator *(Fraction b) {
      return Fraction(this->numerator * b.numerator, this->denominator * b.denominator);
    }

    Fraction operator /(Fraction b) {
      return Fraction(this->numerator * b.denominator, this->denominator * b.numerator);
    }
};

int main() { _;

  Fraction a, b, c;
  char op;

  cin >> a.numerator >> a.denominator >> b.numerator >> b.denominator >> op;

  if(op == 'M') {
    c = a * b;
  } else if(op == 'D') {
    c = a / b;
  }

  cout << c.numerator << ' ' << c.denominator << endl;


  return 0;
}