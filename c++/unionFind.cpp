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

const int MAXN = 1000010;

int parent[MAXN], length[MAXN];

int find(int value);

void merge(int i, int j);

int main() { _;


  return 0;
}

int find(int value) {
  if (parent[value] == value)
    return value;
  return parent[value] = find(parent[value]);
}

void merge(int i, int j) {
  i = find(i); j = find(j);

  if(i == j)
    return;

  if(length[i] >= length[j]) {
    parent[j] = i;
    length[i] += length[j];
  } else {
    parent[i] = j;
    length[j] += length[i];
  }
}