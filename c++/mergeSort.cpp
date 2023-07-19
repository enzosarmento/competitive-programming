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

void mergeSort(vector list, int start, int end) {
  if(end - start > 1) {
    int (middle = end + start) / 2;
    mergeSort(list, start, middle);
    mergeSort(list, end, middle);
    merge(list, start, middle, end);
  }
}

void merge(vector list, int start, int middle, int end) {
  
}

int main() { _;


  return 0;
}