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
const int MAX = 1e3+10;

vector<vector<int>> grafo(MAX);
vector<bool> visitados(MAX);

void dfs(int v) {
  visitados[v] = true;

  for(auto w : grafo[v]) {
    if(!visitados[w]) {
      dfs(w);
    }
  }
}

int main() { _;

  int n, m; cin >> n >> m;
  for(int k = 0; k < m; k++) {
    int i, j; cin >> i >> j; i--, j--;
    grafo[i].push_back(j);
    grafo[j].push_back(i);
  }

  int times = 0;
  for(int i = 0; i < n; i++) {
    if(!visitados[i]) {
      dfs(i);
      times++;
    }
  }

  cout << times << endl;

  return 0;
}