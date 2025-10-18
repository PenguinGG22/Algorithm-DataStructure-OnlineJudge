#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	vector<string> board(n);

	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}

	int min_cnt = 64;
	for (int start_row = 0; start_row <= n - 8; start_row++) {
		for (int start_col = 0; start_col <= m - 8; start_col++) {

			int count_W = 0;
			int count_B = 0;

			for (int i = start_row; i < start_row + 8; i++) {
				for (int j = start_col; j < start_col + 8; j++) {
					if ((i + j) % 2 == 0) {
						if (board[i][j] != 'W') count_W++;
					}
					else {
						if (board[i][j] != 'B') count_W++;
					}
				}
			}

			int current_cnt = min(count_W, 64- count_W);
			if (min_cnt > current_cnt) min_cnt = current_cnt;
		}
	}

	cout << min_cnt;
	return 0;
}