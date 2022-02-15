#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		if (k == 0) { // if k is 0, then no operation will be performed
			cout << 1 << '\n';
			continue;
		}
		string rev = s;
		reverse(rev.begin(), rev.end());
		// otherwise, 2 unique strings will be formed if s + rev(s) and rev(s) + s are different from each other
		cout << (s + rev != rev + s ? 2 : 1) << '\n';
	}
	return 0;
}