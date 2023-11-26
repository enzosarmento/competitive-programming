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

class Time {
  public:
    int hours, minutes, seconds;

    Time() {}

    Time(int hours, int minutes, int seconds) {
      this->hours = hours;
      this->minutes = minutes;
      this->seconds = seconds;
    }

    Time operator +(Time b) {
      int totalA = this->hours * 3600 + this->minutes * 60 + this->seconds;
      int totalB = b.hours * 3600 + b.minutes * 60 + b.seconds;
      int total = totalA + totalB;

      return Time((total / 3600) % 24, (total % 3600) / 60, (total % 3600) % 60);
    }

    Time operator -(Time b) {
      int totalA = this->hours * 3600 + this->minutes * 60 + this->seconds;
      int totalB = b.hours * 3600 + b.minutes * 60 + b.seconds;
      int total = totalA - totalB;
      if(total < 0) {
        total = 23 * 3600 + 59 * 60 + 60 - (-1 * total);
      }
      return Time((total / 3600) % 24, (total % 3600) / 60, (total % 3600) % 60);
    }


};

int main() { _;

  Time a, b, c;
  char op;
  scanf("%d:%d:%d", &a.hours, &a.minutes, &a.seconds);
  scanf("%d:%d:%d", &b.hours, &b.minutes, &b.seconds);
  scanf(" %c", &op);

  if(op == 'A') {
    c = a + b;
  } else if(op == 'S') {
    c = a - b;
  }

  printf("%02d:%02d:%02d\n", c.hours, c.minutes, c.seconds);


  return 0;
}