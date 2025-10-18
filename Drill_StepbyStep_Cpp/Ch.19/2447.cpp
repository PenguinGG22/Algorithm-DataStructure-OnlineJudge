#include <bits/stdc++.h>
using namespace std;

void recursive(int x, int y, int size, vector<vector<char>>& vec) {
	if (size <= 1) {
		vec[x][y] = '*';
		return;
	}

	int newsize = size / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1) {
				continue;
			}
			recursive(x + i * newsize, y + j * newsize, newsize, vec);
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<vector<char>> vec(N, vector<char>(N, ' '));

	recursive(0, 0, N, vec);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << vec[i][j];
		}
		cout << '\n';
	}

	return 0;
}