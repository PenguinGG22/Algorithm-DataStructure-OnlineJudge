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