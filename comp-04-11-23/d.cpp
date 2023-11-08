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

int retornaMes(string str) {
  if(str == "January") {
    return 1;
  } else if(str == "February") {
    return 2;
  } else if(str == "March") {
    return 3;
  } else if(str == "April") {
    return 4;
  } else if(str == "May") {
    return 5;
  } else if(str == "June") {
    return 6;
  } else if(str == "July") {
    return 7;
  } else if(str == "August") {
    return 8;
  } else if(str == "September") {
    return 9;
  } else if(str == "October") {
    return 10;
  } else if(str == "November") {
    return 11;
  } else if(str == "December") {
    return 12;
  }
  return -1;
}

int main() { _;

  int n, month, day, year; cin >> n;
  int v[n][3];
  string str, lixo;
  getline(cin, lixo);
  for(int i = 0; i < n; i++) {
    getline(cin, str);

    istringstream iss(str);
    string str2;
    int j = 0;
    while(iss >> str2) {
      if(j == 0) {
        month = retornaMes(str2);
      } else if(j == 1) {
        size_t remove = str2.find(',');
        str2.erase(str2.begin() + remove);
        day = stoi(str2);
      } else {
        if(str2.size() > 1)
          str2 = str2.substr(str2.size() - 2);
        else
          str2 = str2.substr(str2.size() - 1);
        year = stoi(str2);
      }
      j++;
    }

    if(month != -1 && day >= 1 && day <= 31) {
      v[i][0] = month;
      v[i][1] = day;
      v[i][2] = year;
    }
    else {
      v[i][0] = -1;
      v[i][1] = -1;
      v[i][2] = -1;
    }
  }

  for(int i = 0; i < n; i++) {
    if(v[i][0] != -1)
      printf("%02d/%02d/%02d\n", v[i][0], v[i][1], v[i][2]);
    else
      printf("Invalid\n");
  }

  return 0;
}