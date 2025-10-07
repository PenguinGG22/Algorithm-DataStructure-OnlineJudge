#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T = 5;
	
	int cnt = 0;
	while (T--) {
		int N;
		cin >> N;
		cnt += N * N;
	}

	cout << cnt % 10;

	return 0;
}