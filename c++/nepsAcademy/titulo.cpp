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

string title(string f) {
	for(int i = 0; i < f.size(); i++) {
		if(isupper(f[i]))
			f[i] -= 'A';
		else
			f[i] -= 'a';
	}

	f[0] += 'A';

	for(int i = 1; i < f.size(); i++) {
		int t = f[i - 1];
		if(t == 32)
			f[i] += 'A';
		else
			f[i] += 'a';
	}

	return f;
}

int main() { _;
	string f;

	getline(cin, f);
		
	cout << title(f) << "\n";
}