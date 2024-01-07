#include "template.h"

int main() { _;

  vector<int> v1(10), v2(10), o;

  for(int i = 0; i < 10; i++) {
    cin >> v1[i]; 
    v2[i] = v1[i];
  } 

  sort(v2.begin(), v2.end());

  int m = v2[0];

  for(int i = 0; i < 10; i++) {
    if(m == v1[i]) {
      o.push_back(i);
      v1[i] = -1;
    }
  }

  cout << "Menor: " << m << endl;
  
  cout << "Ocorrencias: ";
  for(auto x : o) cout << x << ' ';
  cout << endl;

  for(auto x : v1) cout << x << ' ';
  cout << endl;

  return 0;
}