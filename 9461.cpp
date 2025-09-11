#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	long long dp[105] = { 0, };

	dp[1] = 1, dp[2] = 1, dp[3] = 1;
	for (int i = 4; i <= 100; ++i) {
		dp[i] = dp[i - 2] + dp[i - 3];
	}

	while (N--) {
		int T;
		cin >> T;

		cout << dp[T] << '\n';
	}

	return 0;
}

/*

1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, 28...

f(1) = 1
f(2) = 1
f(3) = 1
f(4) = 2
f(5) = 2
f(6) = 3
f(7) = 4
f(8) = 5
f(9) = 7
f(10) = 9
...

f(n) = f(n - 2) + f(n - 3)

*/