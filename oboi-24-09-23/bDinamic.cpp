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

int min(int x, int y, int z) { 
  return min(min(x, y), z);
}

int dist(string str1, string str2) {
  int n = str1.size(), m = str2.size();
    int dp[n+1][m+1];

    for (int i=0; i<=n; i++)
        dp[i][0] = i;
    for (int j=0; j<=m; j++)
        dp[0][j] = j;

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (str1[i-1] != str2[j-1]) {
                dp[i][j] = 1 + min(dp[i-1][j],    // Remover
                                   dp[i][j-1],    // Inserir
                                   dp[i-1][j-1]); // Substituir
            }
            else
                dp[i][j] = dp[i-1][j-1];
        }
    }
    return dp[n][m];
}

int main() { _;

  string str1, str2;
  getline(cin, str1);
  getline(cin, str2);

  cout << dist("A", "C") << endl;


  return 0;
}