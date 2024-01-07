#include "template.h"

const int MAXN = 1000010;
int bank[MAXN], length[MAXN];

int find(int x);

void merge(int i, int j);

int main() { _;

  int n, k; cin >> n >> k;

  for(int i = 1; i <= n; i++) {
    length[i] = 1;
    bank[i] = i;
  }
  for(int i = 0; i < k; i++) {
    char c; int a, b; cin >> c >> a >> b;

    if(c == 'F') {
      merge(a, b);
    } else {
      if(find(a) == find(b))
        cout << 'S' << endl;
      else
        cout << 'N' << endl;
    }
  }

  return 0;
}

int find(int x) {
  if(bank[x] == x)
    return x;
  return bank[x] = find(bank[x]);
}

void merge(int i, int j) {
  i = find(i); j = find(j);

  if(i == j) return;

  if(length[i] >= length[j]) {
    bank[j] = i;
    length[i] += length[j];
  } else {
    bank[i] = j;
    length[j] += length[i];  
  }
}