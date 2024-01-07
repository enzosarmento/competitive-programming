#include "template.h"

class Compare {
  public:
    bool operator ()(pair<string, int> p1, pair<string, int> p2) {
      return p1.second < p2.second;
    }
};

int main() { _;

  int n, t; cin >> n >> t;
  priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> students;
  map<int, vector<string>> teams;

  for(int i = 0; i < n; i++) {
    string name; int h; cin >> name >> h;
    students.push({name, h});
  }

  for(int i = 0; i < n; i++) {
    for(int j = 1; j <= t; j++) {
      if(!students.empty()) {
        teams[j].push_back(students.top().f);
        students.pop();
      }
    }
  }

  for(int i = 1; i <= t; i++)
    sort(teams[i].begin(), teams[i].end());

  for(auto x : teams) {
    cout << "Time " << x.f << endl;
    for(auto y : x.s) {
      cout << y << endl;
    }
    cout << endl;
  }

  return 0;
}