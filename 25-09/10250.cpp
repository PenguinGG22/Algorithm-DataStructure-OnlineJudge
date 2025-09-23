#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		int H, W, N;
		cin >> H >> W >> N;
		for (int i = 1; i <= W; i++) {
			for (int j = 1; j <= H; j++) {
				N--;
				if (N <= 0) {
					cout << j * 100 + i << '\n';
					break;
				}
			}
			if (N <= 0) break;
		}
	}

	return 0;
}