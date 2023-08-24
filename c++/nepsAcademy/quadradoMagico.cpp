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

int main() { _;

  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(n));

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> v[i][j];
    }
  }

  vector<int> rowSums(n, 0);
  vector<int> colSums(n, 0);

  int mainDiagonalSum = 0;
  int antiDiagonalSum = 0;

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      rowSums[i] += v[i][j];
      colSums[j] += v[i][j];

      if(i == j)
        mainDiagonalSum += v[i][j];
      
      if(i + j == n - 1)
        antiDiagonalSum += v[i][j];
    }
  }

  int verify = 0;

  for(int i = 0; i < n; i++) {
    if((rowSums[i]  == colSums[i]) && (rowSums[i] == mainDiagonalSum) && (rowSums[i] == antiDiagonalSum))
      verify = 1;
    else
      verify = 0;;
  }

  if(verify)
    cout << rowSums[0] << endl;
  else
    cout << -1 << endl;
  
  return 0;
}