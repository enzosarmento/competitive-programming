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

bool binarySearch(int list[], int left, int right, int x) {
  while(left <= right) {
    int mid = left + (right - left) / 2;
    cout << mid << endl;
    if(list[mid] == x)
      return true;
    if(list[mid] < x)
      left = mid + 1;
    else
      right = mid - 1;
  }
  return false;
}

int main() { _;
  int v[32];
  for(int i = 0; i < 32; i++) v[i] = i + 1;
  for(auto x : v) cout << x << ' ';
  cout << endl;
  cout << binarySearch(v, 0, 32, 32) << endl;
  return 0;
}