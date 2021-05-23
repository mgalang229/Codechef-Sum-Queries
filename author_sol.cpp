#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, m;
	cin >> n >> m;
	// view the image in this repository for better understanding
	// 'y' -> any value in set 'B'
	for (int i = 0; i < m; i++) {
		long long q;
		cin >> q;
		// the answer for this problem is the number of valid 'y' values
		// 'y' must be within these ranges (inclusive)
		// n + 1 <= y <= 2n
		// q - n <= y <= q - 1
		long long l = max(q - n, n + 1);
		long long r = min(q - 1, 2 * n);
		long long ans = 0;
		if (l > r) {
			ans = 0;
		} else {
			ans = r - l + 1;
		}
		cout << ans << '\n';
	}
	return 0;
}
