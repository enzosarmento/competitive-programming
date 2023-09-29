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

  int n, l; cin >> n >> l;
  int soma = 0;
  vector<string> v(n);
  int matriz[n][l];
  vector<pair<int, int>> vetor(l*l, make_pair(0, -1));

  for(int i = 0; i < n; i++) {
    cin >> v[i];
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < l; j++) {
      matriz[i][j] = v[i][j] - 'a';
    }
  }

  int k = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < l; j++) {
      cout << matriz[i][j] << " ";

      if(matriz[i][j] != vetor[k].s) {
        vetor[k].f = j;
        vetor[k].s = matriz[i][j];
      }
      k++;
    }
    cout << endl;
  }

  sort(vetor.begin(), vetor.end());

  int vezes = 0;
  for(auto x : vetor) {
    if(x.s != -1) {
      vezes++;
      cout << x.s << " " << x.f << ", ";
    }
  }
  cout << endl;

  for(int i = 0; i < vetor.size(); i++) {
    if(vetor[i].s != -1 && vetor[i + 1].s != -1) {
      if(vetor[i].f == vetor[i + 1].f && vetor[i].s == vetor[i + 1].s) {
        soma++;
      }
    }
  }

  cout << soma << endl;

  return 0;
}